#include<bits/stdc++.h>
using namespace std;
int largest_row_sum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i=0; i<row; i++)
    {
        
        int sum = 0;
        for(int j=0; j<col; j++)
        {
            sum = sum + arr[i][j];
        }

        if(sum>maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}
int main()
{
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<largest_row_sum(arr,3,3);
    return 0;
}