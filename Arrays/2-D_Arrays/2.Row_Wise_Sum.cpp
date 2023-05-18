#include<bits/stdc++.h>
using namespace std;

void RowSum(int arr[][4], int row, int col)
{
    //row-wise.
    for(int i=0; i<row; i++)
    {
        int sum = 0;
        for(int j=0; j<col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<"sum of first Row "<<sum<<endl;
    }
}

void ColSum(int arr[][4], int row,int col)
{
    //col-wise.
    for(int i=0; i<col; i++)
    {
        int sum = 0;
        for(int j=0; j<row; j++)
        {
            sum += arr[j][i];
        }
        cout<<"sum of first Col "<<sum<<endl;
    }
}
int main()
{
    int arr[3][4];
    for (int i=0; i < 3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }
    RowSum(arr,3,4);
    ColSum(arr,3,4);
    return 0;
}