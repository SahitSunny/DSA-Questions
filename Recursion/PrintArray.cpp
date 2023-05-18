#include<iostream>
using namespace std;

void printarr(int arr[], int n)
{
    if(n < 0)
    {
        return;
    }

    printarr(arr,n-1);
    cout<<arr[n]<<" ";
}

void babbarprint(int arr[], int n)
{
    if(n==0)
    {
        return;
    }
    cout<<arr[0]<<" ";
    babbarprint(arr+1,n-1);
}
int main()
{
    int arr[5] = {5,7,8,3,1};
    int n = 4;
    printarr(arr,n);
    cout<<endl;
    babbarprint(arr,5);
    return 0;
}