#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> ans;
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int ele = 0;
            cin>>ele;
            vec[i][j] = ele;
        }
    }
    //w'll apply conditions for only columns
    for(int col = 0; col<m; col++)
    {
        if(col&1)
        {
            //index is odd
            //bottom --> top
            for(int row = n; row>0; row--)
            {
                ans.push_back(vec[row][col]);
            }
        }
        else
        {
            //index is even or 0
            //top --> bottom
            for(int row = 0; row<n; row++)
            {
                ans.push_back(vec[row][col]);
            }
        }
    }
    
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans.at(i)<<" ";
    }
    return 0;
}