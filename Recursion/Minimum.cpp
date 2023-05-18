#include<bits/stdc++.h>
using namespace std;

void findMin(int arr[], int n, int i, int &mini)
{
    if(i>=n)
    {
        return;
    }
    if(arr[i] < mini)
    {
        mini = arr[i];
    }
    findMin(arr,n,i+1,mini);
}

int main()
{
    int arr[] = {1,54,45,63,78,94,23,12};
    int n = 8;
    int i = 0;
    int mini = INT_MAX;
    findMin(arr,n,i,mini);
    cout<<mini; 
    return 0;
}