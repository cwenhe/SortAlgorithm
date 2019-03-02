#pragma  once
#include <algorithm>

namespace sort
{

	template<typename _ValueType, typename _Pred = std::less<_ValueType> >
	void bubble(_ValueType* values, size_t const count, _Pred const& pred = _Pred() )
	{
		for (size_t idx = 0; count > idx+1; ++idx)
		{
			size_t end = count - idx - 1;
			for (size_t sub_idx = 0; end != sub_idx; ++sub_idx)
			{
				if (pred(values[sub_idx+1],values[sub_idx]))
					std::swap(values[sub_idx+1], values[sub_idx]);
			}
		}
	}

	template<typename _ValueType, typename _Pred = std::less<_ValueType>>
	void bubble(std::vector<_ValueType>& values, _Pred const& pred = _Pred() )
	{
		bubble(values.data(), values.size(), pred);
	}

}