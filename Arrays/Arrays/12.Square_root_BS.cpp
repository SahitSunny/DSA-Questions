#include<iostream>
using namespace std;
int squareroot(int num)
{
    int start = 0, end = num;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end)
    {
        int sqaure = mid*mid;
        if (sqaure > num)
        {
            end = mid - 1;
        }
        else if(sqaure < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(sqaure == num)
        {
            return mid;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<squareroot(n);
    return 0;
}
