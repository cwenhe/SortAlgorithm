#pragma once
#include <iterator>
#include "Insertion.hpp"

namespace sort
{
	template<typename _Iterator, typename _Pred = std::less<std::iterator_traits<_Iterator>::value_type> >
	void shell(_Iterator begin, _Iterator end, _Pred const& pred = _Pred())
	{
		size_t len = std::distance(begin, end);
		size_t gap = 1;

		while (gap < len / 3)
			gap = gap * 3 + 1;
		do
		{
			gap = gap / 3 + 1;
			
			for (size_t idx = gap; len!= idx; ++idx)
			{
				for (size_t sub_idx = idx; sub_idx>= gap ; sub_idx -= gap)
				{
					auto cur_iter = std::next(begin, sub_idx);
					auto last_iter = std::prev(cur_iter, gap);
					if (pred(*cur_iter, *last_iter))
					{
						std::swap(*cur_iter, *last_iter);
					}
				}
			}
		} while (gap != 1);
	}

	template<typename _Container, typename _Pred = std::less< _Container::value_type > >
	void shell(_Container& values, _Pred const& pred = _Pred())
	{
		shell(values.begin(), values.end(), pred);
	}

}