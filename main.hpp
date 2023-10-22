#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void makeArray(int[], int);
void printArray(int[], int);
void findMin(int[], int, int);
void mySort(int[], int);

void findMin(int numbers[], int N, int index)
{
}
void mySort(int numbers[], int N)
{
}
void makeArray(int numbers[], int N)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
		numbers[i] = rand() % 10;
}
void printArray(int numbers[], int N)
{
	for (int i = 0; i < N; i++)
		cout << numbers[i] << "\t";
	cout << endl;
}