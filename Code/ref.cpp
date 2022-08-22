#include<iostream>
using namespace std;

int main(void)
{
    int a=50;
    int &r=a; // r is a reference variable pointing to address of a
    cout<<"A : "<<a<<" R :"<<r<<endl;
    cout<<"&a : "<<&a<< " &r : "<<&r<<endl;
    a+=5;
    cout<<"After modifying a value : A : "<<a<<" R :"<<r<<endl;
    r+=10;
    cout<<"After modifying r value : A : "<<a<<" R :"<<r<<endl;
    //&r++; // not allowed 
    
    return 0;
}