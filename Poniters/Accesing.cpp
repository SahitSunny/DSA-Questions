#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Defining a Pointer.
    string str = "SR0217";
    string *ptr = &str;

    int number = 10;
    int *EX = 0;
    EX = &number;

    // Printing Value using Pointer;
    cout << "The Value Pointed by Pointer " << *ptr << endl;

    // Printing Address Stored By Pointer.
    cout << "The Address Stored by Pointer " << ptr << endl;

    // performing operations on pointer without changing the value.
    int num = 5;
    int *p = &num;
    int a = *p;
    a++;
    cout << "Value of Num " << num << endl;
    cout << "Value of a " << a << endl;
    cout << "Value Pointed by *p " << *p << endl;
    cout << "Address Stored in p " << p << endl;
    cout << "Adress of num " << &num << endl;

    // performing operations with changing the value.
    int n = 10;
    int *pt = &n;
    *pt = *pt + 1;
    cout << "Printing the value pointed by *pt " << (*pt) << endl;
    cout << "Priting the value stored in n " << n << endl;

    // size of pointer.
    string s = "MaidiSahit";
    string *point = &s;
    cout << "Size of string S " << sizeof(s) << endl;
    cout << "Size of *point " << sizeof(point) << endl;

    // NULL pointer.
    int *NP = 0;
    // cout<<*NP;    gives SEGMENTATION FAULT.

    // Copying the Pointer to Pointer.
    string st = "SR";
    string *S = &st;
    string *R = S;
    cout << S << " - " << R << endl;
    cout << *S << " - " << *R << endl;

    //Pointer Arithmetics.
    int  i = 3;
    int *Pointer = &i;
    cout<<"Address before increment "<<Pointer<<endl;
    Pointer++;
    cout<<"Address after increment "<<Pointer<<endl;
}
