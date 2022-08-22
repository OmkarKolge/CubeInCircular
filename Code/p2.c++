using namespace std;

#include <iostream>

class Student{
    public:

    int id;
    string name;

    void details(int id,string name){
        this->id=id;
        this->name=name;
    }

    void print(){
        cout<<"ID : "<<id<<"\nName : "<<name;
    }
};

int main(){
    cout<<"Hello World\n";
    Student s;
    s.id=1;
    s.name="Ram";
    s.print();
    int s_id;
    string s_name;
    Student s1;
    cout<<"\nEnter id and name :\n";
    cin>>s_id;
    cin>>s_name;
    s1.details(s_id,s_name);
    s1.print();
    return 0;
}