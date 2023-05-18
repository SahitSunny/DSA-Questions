#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector <int>> matrix(n, vector<int> (m));
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int ele = 0;
            cin>>ele;
            matrix[i][j] = ele;
        }
    }
    int row = matrix.size(); 
    int col = matrix[0].size();
    int count = 0;
    int total_ele = row*col;

    //initializing index
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total_ele)
    {
        //printing starting row.
        for(int index = startingCol; count < total_ele && index <= endingRow; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //printing ending column.
        for(int index = startingRow; count < total_ele && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending row.
        for(int index = endingCol; count < total_ele && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //printing starting column.
        for(int index = endingRow; count < total_ele && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    } 

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans.at(i)<<" ";
    }
    return 0;
}