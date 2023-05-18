#include<iostream>
using namespace std;

//changing address of p2
void updateAP2(int **p2)
{
    cout<<"p2 inside function : "<< p2 <<endl;
    p2 = p2 + 1;
    cout<<"p2 inside function : "<< p2 <<endl;
}

//changing value of *p2
void updateVP2(int **p2)
{
    cout<<"Before operation and inside function *p2 : "<< *p2 <<endl;
    *p2 = *p2 + 1;
    cout<<"After operation and inside function *p2 : "<< *p2 <<endl;
}

//changing value of **p2
void updateVDP2(int **p2)
{
    cout<<"**p2 inside function : "<<**p2<<endl;
    **p2 = **p2  + 1;
    cout<<"**p2 inside function : "<<**p2<<endl;
}
int main()
{
    int val = 10;
    int *p1 = &val;
    int **p2 = &p1;

    cout<<endl;

    //changing address of p2
    cout<<"Before p2 : "<<p2<<endl;
    
    cout<<endl;
    updateAP2(p2);
    cout<<endl;
    
    cout<<"After p2 : "<<p2<<endl;   
    cout<<endl;


    cout<<endl;
   
    //changing value of *p2
    cout<<"Before *p2 : "<<*p2<<endl;
    cout<<"*p2 == p as "<<*p2<<" == "<<p1<<endl;
    
    cout<<endl;
    updateVP2(p2);
    cout<<endl;

    cout<<"After *p2 : "<<*p2<<endl;   
    cout<<endl;

    //changing value of **p2
    //while execting comment all reamining code as memory address is changed in previous operations.
    cout<<"Before **p2 : "<<**p2<<endl;
    cout<<"**p2 == val as "<<**p2<<" == "<<val<<endl;
    
    cout<<endl;
    updateVDP2(p2);
    cout<<endl;

    cout<<"After **p2 : "<<**p2<<endl;   
    cout<<endl;
    return 0;
}
