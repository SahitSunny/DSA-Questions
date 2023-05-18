#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 4, 5, 7, 9};
    char ch[6] = "abcde";
    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;

    char temp = 'z';
    char *t = &temp;
    cout << t;
    return 0;
}