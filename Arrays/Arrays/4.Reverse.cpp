#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    int start=0, end=n-1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        if(start>end)
        {
            break;
        }
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}