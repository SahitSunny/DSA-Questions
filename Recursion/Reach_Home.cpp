#include<bits/stdc++.h>
using namespace std;
void reachHome(int src, int des)
{
    cout<<"Source : "<<src<<" to destination : "<<des<<endl;
    //base case
    if(src == des)
    {
        cout<<"Mai Pohchgaya"<<endl;
        return;
    }
    //processing -> ek step aage bhado
    src++;
    //recursive relation
    reachHome(src,des);
}
int main()
{
    int src = 1,des=10;
    reachHome(src,des);
    return 0;
}