#include<bits/stdc++.h>
using namespace std;

bool checkKey(string str, int n, char key, int i)
{
    if(i>=n)
    {
        return false;
    }
    if(str[i] == key)
    {
        return true;
    }
    bool ans = checkKey(str,n,key,i+1);
    cout<<ans<<" ";
    return ans;
}

int main()
{
    string str = "SahitMaidi";
    int n = str.length();

    char key = 'M';
    int i = 0;
    bool ans = checkKey(str,n,key,i);
    cout<<ans;
    return 0;
}