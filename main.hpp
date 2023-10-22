#include <iostream>
using namespace std;

void printArray(int[], int);
int find_n_th(int[], int, int);

int find_n_th(int numbers[], int N, int n_th)
{
}
void printArray(int numbers[], int N)
{
	for (int i = 0; i < N; i++)
		cout << numbers[i] << "\t";
	cout << endl;
}