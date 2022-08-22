#include<iostream>
using namespace std;

//call by value
void swap_by_value(int a,int b) // swap_by_val is taking two arguments of type int
{
    int temp;
    temp=a;
    a=b;
    b=temp;
};
//call by address
void swap_by_add(int *a,int *b); // swap_by_add is taking two arguments of type int pointer
//call by reference 
void swap_by_ref(int &a,int &b); // swap_by_ref is taking two arguments of type reference

int main(void)
{
    int n1=20,n2=5;
    cout<<"Before SWAP N1 : "<<n1<<" N2 :"<<n2<<endl;//20 5
    swap_by_value(n1,n2);
    cout<<"After SWAP N1 : "<<n1<<" N2 :"<<n2<<endl;//20 5

    cout<<"_____swap_by_add_____";
    
    cout<<"\nBefore SWAP N1 : "<<n1<<" N2 :"<<n2<<endl;//20 5
    swap_by_add(&n1,&n2);
    cout<<"After SWAP N1 : "<<n1<<" N2 :"<<n2<<endl;//5 20
   // in pointer value will be swap because of address concept 
    
    cout << "_____swap_by_ref_____";
    
    cout<<"\nBefore SWAP N1 : "<<n1<<" N2 :"<<n2<<endl;// 20 5
    swap_by_ref(n1,n2);
    cout<<"After SWAP N1 : "<<n1<<" N2 :"<<n2<<endl;//5 20
    // //in reference value will be swap because of address concept 


    return 0;
}

// void swap_by_value(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

//call by refrence pointers
void swap_by_add(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

 //swap_by_ref(n1,n2);
 // int &a = n1    int &b = n2

void swap_by_ref(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
