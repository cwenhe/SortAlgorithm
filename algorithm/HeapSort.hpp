#pragma once
#include <algorithm>


namespace sort 
{

	//大顶堆
	template<typename _Value>
	void heapAdjust(_Value* arr, size_t cur_node, size_t const end)
	{
		auto left_child = 2 * cur_node+1;

		while (end > left_child)
		{
			auto check_child = left_child;
			if (end > left_child + 1 && arr[left_child + 1] > arr[left_child])
				check_child = left_child + 1;

			if (arr[check_child] > arr[cur_node])
				std::swap(arr[check_child], arr[cur_node]);
			else
				break;

			cur_node = check_child;
			left_child = 2 * cur_node+1;
		}
	}

	template< typename _Value>
	void makeHeap(_Value* arr, size_t const len)
	{
		if (0 == len)
			return;

		for (size_t cur_node = len; 0 != cur_node; --cur_node)
		{
			heapAdjust(arr, cur_node-1, len);
		}


		for (size_t max_node = len - 1; 0 != max_node; --max_node)
		{
			std::swap(arr[0], arr[max_node]);
			heapAdjust(arr, 0, max_node);
		}
	}
}
