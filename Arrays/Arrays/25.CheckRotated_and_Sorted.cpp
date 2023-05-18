#include<iostream>
using namespace std;

bool Check(int arr[], int n)
{
  int pair = 0;
  for(int i =0; i<n; i++)
  {
    if(arr[i-1+1] > arr[i])
    {
      pair++;
    }
  }
  if(arr[n-1] > arr[0])
  {
    pair++;
  }

  return pair<=1;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  cout<<Check(a,n);
}
