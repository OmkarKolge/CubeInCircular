using namespace std;

#include<iostream>

class Person{
   string name;
   int age;
   public:
   Person(){
       this->name="Ram";
       this->age=30;
   }
   Person(string name,int age){
       this->name=name;
       this->age=age;
   }
   void print_per_detail(){
       cout<<"Name : "<<this->name<<" Age : "<<this->age;
   }
};
class Employee: public Person
{
    int id;
    string dept;
    public:
    Employee(){
        this->id=1;
        this->dept="HR";
    }
    Employee(string name,int age,int id,string dept):Person(name,age){
        this->id=id;
        this->dept=dept;
    }
     void print_emp_detail(){
        print_per_detail();
        cout<<" ID : "<<this->id<<" Department : "<<this->dept;
   }
};

int main()
{
  Employee e;
  e.print_emp_detail();
  int e_id,e_age;
  string e_name,e_dept;
  cout<<"\nEnter employee name, age, id, department\n";
  cin>>e_name;
  cin>>e_age;
  cin>>e_id;
  cin>>e_dept;
  Employee e1(e_name,e_age,e_id,e_dept);
  e1.print_emp_detail();
  return 0;
}
