#include<iostream>
using namespace std;
int BinarySearch(int arr[], int start, int end, int key)
{
    int s = start;
    int e = end;
    int mid = s + (e - s)/2;
    for (int i = 0; i < 5; i++)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = s + (e-s)/2;
    }
}
int getpivot(int arr[] , int n)
{
    int start = 0, end = 4;
    int mid = start + (end-start)/2;
    for (int i = 0; i < 5; i++)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int SearchRotated(int arr[] , int key)
{
    int pivot = getpivot(arr,5);
    if (arr[pivot] <= key && key <= arr[4])
    {
        return BinarySearch(arr,pivot,4,key);
    }
    else
    {
        return BinarySearch(arr,0,pivot-1,key);
    }
}
int main()
{
    int arr[5] = {7,9,1,2,3};
    int key;
    cin>>key;

    cout<<"the index of key is "<<SearchRotated(arr,key);
    return 0;
}