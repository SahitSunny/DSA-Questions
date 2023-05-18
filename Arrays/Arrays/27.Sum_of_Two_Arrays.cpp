#include<iostream>
#include<vector>
using namespace std;
void input(vector<int> a, int  n)
{
  for(int i=0; i<n; i++)
  {
    int ele;
    cin>>ele;
    a.push_back(ele);
  }
}

void GetSum(vector<int> a, int n, vector<int> b, int m)
{
  vector<int> ans;
  int carry = 0;
  int i = n-1;
  int j = m-1;

  //First index addition.
  while(i>=0 && j>=0)
  {
    int sum = a[i] + b[j] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    i--;
    j--;
  }

  //First Case (if size of First array is Large).
  while(i>=0)
  {
    int sum = a[i] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    i--;
  }

  //Second Case (If Second Array is Larger).
  while(j>=0)
  {
    int sum = b[i] + carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
    j--;
  }

  //Handling Carry Case.
  while(carry!=0)
  {
    int sum = carry;
    carry = sum/10;
    sum = sum%10;
    ans.push_back(sum);
  }

  cout<<ans.at(0);

}
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> a;
  vector<int> b;
  //input
  input(a, n);
  input(b, m);

  GetSum(a,n,b,m);

  return 0;
}