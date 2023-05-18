#include<bits/stdc++.h>
using namespace std;
void update1(int n)     //pass by value, value of n doesnot change
{
    n++;
}
void update2(int &n)    //pass by refernce, value changes 
{
    n++;
}
int main()
{
    int n=5;
    cout<<"Before call : "<<n<<endl;
    update1(n);
    cout<<"After call : "<<n<<endl;
    cout<<"Before call : "<<n<<endl;
    update2(n);
    cout<<"After call : "<<n<<endl;
    return 0;
}