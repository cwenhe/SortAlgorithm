#include <vector>
#include <cassert>
#include "algorithm/HeapSort.hpp"
#include "algorithm/BubbleSort.hpp"
#include "algorithm/SelectionSort.hpp"

int main()
{
	std::vector<int> test = { 1,3,4,5,6,4,1,0 };
	auto test1 = test;
	sort::makeHeap(test.data(), test.size());
	sort::bubble(test1);
	sort::selection(test1);

	assert(test == test1);
	

	return 0;
}