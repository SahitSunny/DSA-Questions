#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    int smallproblem = power(n-1);
    int bigproblem = 2*smallproblem;
    return bigproblem;
}
int main()
{
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans;
    return 0;
}