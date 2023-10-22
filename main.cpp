#include "main.hpp"

int main()
{
	const int N = 8;
	int numbers[N] = {25, 5, 10, 15, 30, 35, 50, 45};

	// makeArray(numbers, N);
	printArray(numbers, N);
	mySort(numbers, N);
	printArray(numbers, N);
}