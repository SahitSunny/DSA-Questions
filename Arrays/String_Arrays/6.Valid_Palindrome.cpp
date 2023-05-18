#include<iostream>
#include<string>
using namespace std;


//Checking String is Valid or Not
bool Valid(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Converting it to LowerCase.
char toLowerCase(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return ch;
    }
}


//Checking either String is Palindrome or not
bool checkPalindrome(string str)
{
    int s = 0, e = str.length()-1;
    while(s<=e)
    {
        if(str[s] != str[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    } 
    return 1;
}

bool isPalindrome(string str)
{

    //made a string containing only A-Z or a-z or 0-9
    string temp = "";
    for(int i=0; i<str.length(); i++)
    {
        if(Valid(str[i]))
        {
            temp.push_back(str[i]);
        }
    }
    
    for(int j = 0; j<temp.length(); j++)
    {
       temp[j] = toLowerCase(temp[j]);
    }

    return checkPalindrome(temp);
}
int main()
{
    string str;
    cin>>str;
    cout<<isPalindrome(str);
    return 0;
}