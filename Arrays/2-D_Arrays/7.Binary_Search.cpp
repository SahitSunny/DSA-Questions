#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    vector<vector <int>> matrix(row, vector<int> (col));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int ele = 0;
            cin>>ele;
            matrix[i][j] = ele;
        }
    }

    int key;
    cin>>key;

    int start = 0, end = (row*col) - 1;
    int mid = start + (end - start)/2;
    while(start<=end)
    {
        int ele = matrix[mid/col][mid%col];
        if(ele == key)
        {
            cout<<(mid/col)<<" "<<(mid%col);
        }
        if(ele < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return 0;
}