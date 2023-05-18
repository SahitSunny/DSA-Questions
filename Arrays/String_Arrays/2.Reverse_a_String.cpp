#include<iostream>
using namespace std;

int getlen(char ch[])
{
    int count=0;
    for(int i = 0; ch[i]!=0; i++)
    {
        count++;
    }
    return count;
}

void reverse(char ch[],int len)
{
    int i=0, e = len-1;
    for(int i=0; i<=len/2; i++)
    {
        swap(ch[i],ch[e--]);
    }
    cout<<ch;
}
int main()
{
    char ch[20];
    cin>>ch;
    int len = getlen(ch);
    reverse(ch,len);
    return 0;
}