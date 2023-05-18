#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    vector<vector <int>> matrix(row , vector <int> (col));
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int ele = 0;
            cin>>ele;
            matrix[i][j] = ele;
        }
    }
    int target;
    cin>>target;
    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex < row && colIndex >= 0)
    {
        int ele = matrix[rowIndex][colIndex];
        if(ele == target)
        {
            cout<<"Found";
        }
        if(ele > target)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
        }
    }
    if(rowIndex > row && colIndex > col)
    {
        cout<<"Not Found";
    }
    return 0;
}