#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout<<"Printing Adress of i "<<&i<<endl;
    cout<<"Printing *ptr "<<*ptr<<endl;
    cout<<"Printing address of ptr "<<&ptr<<endl;
    cout<<"Printing ptr "<<ptr<<endl;
    cout<<"Printing *ptr2 "<<*ptr2<<endl;

    //Printing value of i 
    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    cout<<endl;

    //Printing Address of i
    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<endl;

    //Printing Adrress of ptr
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<endl;

    //Printing Address of ptr2
    cout<<&ptr2;
    return 0;
}