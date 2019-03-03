#include <iostream>
#include <vector>
#include <cassert>
#include "algorithm/HeapSort.hpp"
#include "algorithm/BubbleSort.hpp"
#include "algorithm/SelectionSort.hpp"
#include "algorithm/InsertionSort.hpp"
#include "algorithm/ShellSort.hpp"

int main()
{
	std::vector<int> test = { 1,3,3,4,23598235,5,6,4,1,0 };
	auto test1 = test;
	sort::makeHeap(test.data(), test.size());
	sort::bubble(test1);
	sort::selection(test1);
	sort::shell(test1);

	assert(test == test1);
	
    std::copy(test.begin(), test.end(), std::ostream_iterator<int>(std::cout, ","));

	return 0;
}
