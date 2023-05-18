#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[],int k)
{
  int i = 0;  //keeps track of 1st array
  int j = 0;  //keeps track of 2nd array
  int r = 0; //keeps track of
  while(i<n && j<m)
  {
    if(arr1[i]<arr2[j])
    {
      arr3[k++] = arr1[i++];
    }
    else
    {
      arr3[k++] = arr2[j++];
    }
  }
  //adding remaining element of 1st array
  while(i<n)
  {
    arr3[k++] = arr1[i++];
  }
  //adding remaining element of 2nd array
  while(j<m)
  {
    arr3[k++] = arr2[j++];
  }

}

void printer(int arr3[], int k)
{
  for(int i = 0; i<k; i++)
  {
    cout<<arr3[i]<<" ";
  }
}
int main()
{

  int arr1[5] = {1,3,5,7,9};
  int arr2[3] = {2,4,6};
  int arr3[8] = {0};

  merge(arr1,5,arr2,3,arr3,8);
  printer(arr3,8);
}
