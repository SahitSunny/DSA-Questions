#include <iostream>
using namespace std;
void print(int *p)
{
    cout << "Address of pointer " << p << endl;
}

void updateA(int *p)
{
    p = p + 1;
    cout << "Value of p in function " << p << endl;
}

void updateV(int *p)
{
    *p = *p + 1;
    cout << "Value of *p in function " << *p << endl;
}

int getSum(int *arr)
{
    cout << " size : " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += i[arr];
    }
    return sum;
}

void partialPrint(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int value = 10;
    int *p = &value;

    print(p);

    cout << "Before calling function value of p : " << p << endl;
    updateA(p);
    cout << "After calling function value of p : " << p << endl;

    cout << "Before calling function value of *p : " << *p << endl;
    updateV(p);
    cout << "After calling function value of *p : " << *p << endl;

    int arr[6] = {1, 2, 3, 4, 5, 69};
    cout << " Sum is : " << getSum(arr) << endl;
    partialPrint(arr + 3, 3);
    return 0;
}
