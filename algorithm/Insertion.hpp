#pragma once
#include <iterator>

namespace sort
{
	template<typename _Iterator, typename _Pred = std::less< std::iterator_traits<_Iterator>::value_type> >
	void insertion(_Iterator begin, _Iterator end, _Pred const& pred = _Pred())
	{
		auto r_end = std::reverse_iterator<_Iterator>(begin);
		for (auto iter = begin; end != iter; ++iter)
		{
			auto r_it = std::reverse_iterator<_Iterator>(std::next(iter));
			for (auto sub_iter = std::next(r_it); r_end != sub_iter; r_it = sub_iter++)
			{
				if (pred(*r_it, *sub_iter))
					std::swap(*r_it, *sub_iter);
				else
					break;
			}

		}

	}

	template<typename _Container, typename _Pred = std::less< _Container::value_type > >
	void insertion(_Container& values, _Pred const& pred = _Pred())
	{
		insertion(values.begin(), values.end(), pred);
	}

}