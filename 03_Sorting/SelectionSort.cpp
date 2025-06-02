#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int n;
	cout << "Enter the size of array:" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		int mini = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[mini])
			{
				mini = j;
			}
		}
		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i] = temp;
	}
	cout << "The Sorted array is :" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
