#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[],int n,int i,int &maxi)
{
    if(i>=n)
    {
        return;
    }
    if(arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findMax(arr,n,i+1,maxi);
    
}

int main()
{
    int arr[] = {1,54,45,63,78,94,23,12};
    int n = 8;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr,n,i,maxi);
    cout<<maxi<<" ";
    return 0;
}