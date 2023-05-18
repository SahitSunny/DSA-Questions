#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m,int mid)
{
  int painterCount = 1;
  int boards = 0;

  for (int i=0; i<n; i++) {
      if(boards+arr[i] <= mid)
      {
        boards += arr[i];
      }
      else
      {
        painterCount++;
        if(painterCount > m || arr[i] > mid)
        {
            return false;
        }
        boards = arr[i];
      }
  }
  return true;
}

int Painter_Partition(int arr[], int n, int m)
{
  int s = 0;
  int sum = 0;
  int ans = -1;
  for (int i=0; i<n; i++) {
    sum += arr[i];
  }
  int e = sum;
  int mid = s + (e-s)/2;

  while (s<=e)
  {
    if(isPossible(arr,n,m,mid))
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}
int main()
{
  int n,m;
  cin>>n>>m;
  int arr[1000];
  for (int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  cout<<Painter_Partition(arr,n,m);
  return 0;
}
