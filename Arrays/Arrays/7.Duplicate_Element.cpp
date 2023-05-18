#include<iostream>
using namespace std;
int main()
{
    int arr[10000];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans^i;
    }
    cout<<ans;
    return 0;
}