#include<iostream>
using namespace std;

int getlen(char ch[])
{
    int count = 0;
    for(int i =0; ch[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool IsPalindrome(char ch[], int n)
{
    int s = 0 , e = n-1;
    while(s <= e)
    {
        if(toLowerCase(ch[s]) != toLowerCase(ch[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}


int main()
{
    char name[20];
    cin>>name;
    int len = getlen(name);
    cout<<IsPalindrome(name,len);
    return 0;
}