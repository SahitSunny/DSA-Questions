#include<iostream>
using namespace std;
int getlen(char ch[])
{
    int count = 0;
    for(int i = 0; ch[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

char toLowerCase(char ch)   //took only one charecter hence no sqaure brackets.
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(char ch[], int n)
{
    int s = 0,e = n-1; 
    while(s<=e)
    {
        if(toLowerCase(ch[s]) != toLowerCase(ch[e]))
        {
            return 0;
        }
        if(!(toLowerCase(ch[s]) <= 'z' && toLowerCase(ch[s]) >='a') || !(ch[s] >= '0' && ch[s] <= '9'))
        {
            s++;
        }
        if(!(toLowerCase(ch[e]) <= 'z' && toLowerCase(ch[e]) >='a') || !(ch[e] >= '0' && ch[e] <= '9'))
        {
            e--;
        }
        s++;
        e--;
    }
    return 1;
}

int main()
{
    char ch[20];
    cin>>ch;
    int len = getlen(ch);
    cout<<checkPalindrome(ch,len);
    return 0;
}