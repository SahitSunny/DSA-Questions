#include<iostream>
#include<string>
using namespace std;

char MaxOccCharacter(string s)
{
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++)
    {
        int number = 0;
        char ch = s[i];
        
        //LowerCase
        if(ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
       
        //UpperCase
        if(ch >= 'A' && ch <= 'Z')
        {
            number = ch - 'A';
        }

        arr[number]++;  //we made a array of integer which has counts of character
    }

    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;
}                                                                                                       

int main()
{
    string s;
    cin>>s;
    cout<<MaxOccCharacter(s);
    return 0;
}