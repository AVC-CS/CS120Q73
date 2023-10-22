#include "main.hpp"

int main()
{
	int numbers1[8] = {75, 5, 10, 15, 55, 65, 50, 45};
	int ret;

	// Test 1
	printArray(numbers1, 8);
	ret = find_n_th(numbers1, 8, 3);
	printArray(numbers1, 8);
	cout << "The return value is " << ret << endl; // Return value is 15

	// Test 2
	int numbers2[5] = {11, 12, 13, 15, 14};
	printArray(numbers2, 5);
	ret = find_n_th(numbers2, 5, 2);
	printArray(numbers2, 5);
	cout << "The return value is " << ret << endl; // Return value is 12

	// Test 3
	ret = find_n_th(numbers2, 5, 3);
	printArray(numbers2, 5);
	cout << "The return value is " << ret << endl; // Return value is 13
}