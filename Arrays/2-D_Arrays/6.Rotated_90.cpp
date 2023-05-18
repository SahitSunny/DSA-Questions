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

    //intitalizing index
    int endingRow = row - 1;
    int endingCol = col - 1;
    int startingRow = 0;
    int startingCol = 0;

    while(count < total_ele)
    {
        for(int index = endingRow; index >= startingRow && count < total_ele; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans.at(i)<<" ";
    }
    return 0;
}