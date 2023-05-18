#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr1[100000];
    int arr2[100000];

    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout<<arr2[j];
                arr2[j] = -101212;
                break;
            }
            else if(arr1[i]<arr2[j])
            {
                break;
            }
            else
            {
                j++;
            }
        }
    }
    
    
    return 0;
}