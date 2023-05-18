#include<iostream>
using namespace std;
int MinMax(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int Max = INT_MIN;
    int Min = INT_MAX;  //store min in mx and store max in mn
    for (int i = 0; i < n; i++)
    {
        Max = max(Max , arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        Min = max(Min , arr[i]);
    }
    return Max , Min; 
}
int main()
{
    int n;
    cin>>n;

    int arr[100];
    MinMax(arr, n = 100);
    return 0;
}