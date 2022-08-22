#include<iostream>
#include<list>
 
using namespace std;
 
//template <class T> 
void display(list<int> &lst) {
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
    display(list1);
    // list1.sort();
    // display(list1);
 

    // list<int> list2(3);  //empty list of length 3
    // list<int> :: iterator it = list2.begin();
    // *it = 45;
    // it++;
    // *it = 6;
    // it++;
    // *it = 9;
    // it++;
 
    // display(list2);

    // list<char> list3;  //empty list of 0 length
 
    // list3.push_back('A');
    // list3.push_back('B');
    // list3.push_back('D');
    // list3.push_back('A');
    // list3.push_back('R');
 
    // display(list3);

    return 0;
}