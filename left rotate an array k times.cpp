// Rotate an array K number of times
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
	int mod = k % n;

	for (int i = 0; i < n; i++)
		cout << (arr[(mod + i) % n]) << " ";

	cout << "\n";
}

int main()
{
  int n;
	int arr[1000];
	cout<<"enter size of array";
  cin>>n;
  cout<<"enter the array";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
	int k = 2;
  
	leftRotate(arr, n, k);

	k = 3;
  
	leftRotate(arr, n, k);

	k = 4;
  
	leftRotate(arr, n, k);

	return 0;
}
