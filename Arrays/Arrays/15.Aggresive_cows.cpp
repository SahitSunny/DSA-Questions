#include<iostream>
#include<climits>
using namespace std;

int AggressiveCows(int arr[], int n, int m)
{
  int s = 0;
  int maxi = INT_MIN;
  for (int i=0; i<n; i++) {
    maxi = max(maxi,arr[i]);
  }
  int e = maxi;
  int mid = s + (e-s)/2;
}

int main()
{
    int arr[100];
    int n,m;
    cin>>n>>m;
    for (int i=0; i<n; i++) {
      cin>>arr[i];
    }

    cout<<AggressiveCows(arr,n,m);
    return 0;
}
