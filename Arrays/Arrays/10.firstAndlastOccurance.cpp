#include<iostream>
using namespace std;
int FirstOccurance(int arr[], int n, int key)
{
    int start = 0 , end = n - 1;
    int mid = (start+end)/2;
    int ans = -1;

    for(int i=0; i<n; i++)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid -1;

        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int lastOccurance(int arr[], int n, int key)
{
    int start = 0 , end = n - 1;
    int mid = (start+end)/2;
    int ans = -1;

    for(int i=0; i<n; i++)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;

        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int main()
{
    int arr[12] = {1,2,3,3,3,3,3,3,3,3,3,5};
    int key;
    cin>>key;
    
    int first = FirstOccurance(arr, 12, key);
    int last = lastOccurance(arr, 12, key);
    cout<<"Total Number of Occurance is "<<(last - first) + 1;
    return 0;
}