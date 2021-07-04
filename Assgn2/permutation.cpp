
#include <bits/stdc++.h>
using namespace std;
void display(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void findPermutations(int a[], int n)
{
	sort(a, a + n);
	do {
		display(a, n);
	} while (next_permutation(a, a + n));
}    

int main()
{
	int a[] = {7,2,6};
	int n = sizeof(a) / sizeof(a[0]);
	findPermutations(a, n);
	return 0;
}
