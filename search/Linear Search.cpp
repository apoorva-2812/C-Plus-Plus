#include <iostream>
using namespace std;

void LinearSearch(int *array, int size, int key)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == key)
		{
			cout<<"Element found at index:"<<i;
		}
	}

	cout<<"Element not found!";
}

int main()
{
	int size;
	cout << "\nEnter the size of the Array : ";
	cin >> size;

	int array[size];
	int key;

	//Input array
	cout << "\nEnter the Array of " << size << " numbers : ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	cout << "\nEnter the number to be searched : ";
	cin >> key;

	LinearSearch(array, size, key);
}
