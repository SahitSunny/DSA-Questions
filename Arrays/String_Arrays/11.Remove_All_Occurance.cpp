#include<bits/stdc++.h>
using namespace std;
string removeAllOcc(string s,string part)
{
    while(s.length()!=0 && part.length() < s.length())
    {
        s.erase(s.find(part) , part.length());
    }
    return s;
}
int main()
{
    string s,part;
    cin>>s>>part;
    cout<<removeAllOcc(s,part);
    return 0;
}