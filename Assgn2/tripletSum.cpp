
#include <iostream>
using namespace std;


void findTriplets(int arr[], int n, int sum)
{
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] == sum) {
					cout << arr[i] << " "
						<< arr[j] << " "
						<< arr[k] << endl;
				}
			}
		}
	}
}


int main()
{
	int arr[] = { 3, 1, 2, 9, 7, 5, -1, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findTriplets(arr, n, 9);
	return 0;
}
