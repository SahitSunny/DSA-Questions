#include<iostream>
using namespace std;
int main()
{
  int i = 1;  // picking first element
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  while(i<=n)
  {
    int temp = arr[i];
    int j = i - 1;
    while (j>=0) {
      if(arr[j] > temp)
      {
        //Shifting.
        arr[j+1] = arr[j];
      }
      else
      {
        //already sorted
        break;
      }
      j--;
    }
    arr[j+1] = temp;  //j will be one step behind to correct position.
    i++;
  }

  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
