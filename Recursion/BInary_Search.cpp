#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int &n, int i , int key, int s, int e)
{
    int mid = s + (e-s)/2;
    if(s>e)
    {
        return -1;
    }
    if(arr[mid] == key)
    {
        return mid + 1;
    }
    if(arr[mid] > key)
    {
        return binarySearch(arr,n,i+1,key,s,mid-1);
    }
    if(arr[mid] < key)
    {
        return binarySearch(arr,n,i+1,key,mid+1,e);
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    int i = 0;
    int key = 50;
    int s = 0;
    int e = n-1;
    cout<<binarySearch(arr,n,i,key,s,e);
    return 0;
}