#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    int choota = fact(n-1);
    int bada = n*choota;
    return bada;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}