#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int s = 0 , e = n-1;
    int mid = (s+e)/2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return mid;
        }
        else if (arr[i] < key)
        {
            s = mid + 1;    //right part
        }
        else
        {
            e = mid - 1;    //left part
        }
        //updating mid
        mid = (s+e)/2;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[10000000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    BinarySearch(arr, n , key);
    
    return 0;
}