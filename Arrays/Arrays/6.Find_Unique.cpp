#include<iostream>
using namespace std;
int Unique(int arr[], int n)
{
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;

    int arr[1000000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<Unique(arr, n);
    
    return 0;
}