#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int arr[], int i, int n)
{
    if(arr[i] > arr[i+1])
    {
        return false;
    }
    if(i == (n - 1))
    {
        return true;
    }
    bool ans = checkSorted(arr,i+1,n);
    return ans;
}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    int i = 0;
    bool ans = checkSorted(arr,i,n);
    cout<<ans;
    return 0;
}