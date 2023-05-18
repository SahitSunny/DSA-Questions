#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int* numbers = new int[row];    //this array store the number of columns of each 1D array.
    int** arr = new int*[row];

    for(int i=0; i<row; i++)
    {
        cout<<"Enter the number of columns in each 1D array ";
        cin>>numbers[i];
        arr[i] = new int[numbers[i]];
    }

    //input values.

    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<numbers[i]; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<numbers[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}