#include<bits/stdc++.h> //it included sstream
using namespace std;
int main()
{
    string S,T;
    getline(cin,S);
    stringstream X(S);
    while(getline(X,T,'-'))
    {
       cout<<T<<endl; 
    }
    return 0;
}