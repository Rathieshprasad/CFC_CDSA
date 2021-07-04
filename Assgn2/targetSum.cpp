
#include <iostream>
using namespace std;

int printPairs(int arr[], int n, int sum)
{
	int count = 0; 

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum)
				cout << "(" << arr[i] << ", "
					<< arr[j] << ")" << endl;
}


int main()
{
	int arr[] = { 3,1,11,2,9,7,4,5,-1,13,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 8;
	printPairs(arr, n, sum);
	return 0;
}
