#include <vector>
#include "algorithm/HeapSort.hpp"

int main()
{
	std::vector<int> test = { 1,3,4,5,6,4,1,0 };
	sort::makeHeap(test.data(), test.size());
	

	return 0;
}