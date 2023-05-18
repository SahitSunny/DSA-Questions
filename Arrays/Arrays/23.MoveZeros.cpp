#include<iostream>
using namespace std;
void moveZeroes(int nums[], int n) {
        int nonzero = 0;
        for(int j=0; j<n; j++)
        {
            if(nums[j] != 0)
            {
                swap(nums[j] , nums[nonzero]);
                nonzero++;
            }
        }
}

void Printer(int arr[], int n){
  for(int i = 0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i =0; i<n ;i++)
  {
    cin>>arr[i];
  }
  moveZeroes(arr,n);
  Printer(arr,n);
}
