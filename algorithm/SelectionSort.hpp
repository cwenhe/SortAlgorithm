#pragma once
#include <cassert>
#include <iterator>

namespace sort
{
	template<typename _Iterator, typename _Pred>
	void selection(_Iterator begin, _Iterator end, _Pred const& pred)
	{
		for (auto iter = begin; end != iter; ++iter)
		{
			auto select = iter;
			for (auto cur_iter = std::next(iter); end != cur_iter; ++cur_iter)
			{
				if (pred(*cur_iter, *select))
					select = cur_iter;
			}

			if (select != iter)
				std::swap(*iter, *select);
		}
	}

	template<typename _Container, typename _Pred = std::less<typename _Container::value_type> >
	void selection(_Container& dst, _Pred const& pred = _Pred())
	{
		selection(dst.begin(), dst.end(), pred);
	}
}
