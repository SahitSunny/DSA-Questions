#include<bits/stdc++.h>
using namespace std;

int DistinctWays(int n)
{
    if(n < 0)
    {
        return 0;   //such stair doesnt exist.
    }
    if(n == 0)
    {
        return 1;    //there is only one way to reach oth stair from zeroth stair by jumping at oth stair itself.
    }
    int ans = DistinctWays(n-1) + DistinctWays(n-2);
    return ans;
}
int main()
{
   int stairs;
   cin>>stairs;
   cout<<DistinctWays(stairs);
}