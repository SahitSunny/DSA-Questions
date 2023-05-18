#include<bits/stdc++.h>
using namespace std;

int compress(vector<char> ch)
{
    int i = 0;
    int n = ch.size();
    int ans_index = 0;

    while(i<n)
    {
        int j = i + 1;
        while(j<n && ch[i] == ch[j])
        {
            j++;
        }
        //it means we got new character here or may be our vector is gonna end
        ch[ans_index++] = ch[i];    //pushing characters

        int count = j-i;
        if(count>1)
        {
            string cnt = to_string(count);
            for(int i = 0; i<cnt.size(); i++)
            {
                ch[ans_index++] = cnt[i];
            }
        }
        i = j; //our ending becomes starting for next iteration
    } 
    return ans_index;
}

int main()
{
    string str;
    getline(cin,str);
    vector<char> ch(str.begin(),str.end());
    cout<<compress(ch);
    return 0;
}