#include<iostream>
using namespace std;
int main()
{
    int len = 0;
    char Name[20];
    cin>>Name;
    // for(int i=0; i<20; i++)
    // {
    //     if(Name[i] == '\0')
    //     {
    //         break;
    //     }
    //     len++;
    // }
    
    for(int i=0; Name[i] !='\0'; i++)
    {
        len++;
    }
    cout<<len;
    return 0;
}