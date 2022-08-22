#include <iostream>
#include <string>

using namespace std;

class Employee
{
    int sal;
    string name;
    static int id_count;

public:
    void setName(string name);
    void setData();
    void getData();
};

void Employee::setData()
{
    cout << "Enter Salary for ID " << ++id_count << endl;
    cin >> sal;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::getData()
{
    cout << "Employee ID " << id_count << " name " << name << " and salary " << sal << endl;
}

int Employee::id_count = 1000;

int main()
{
    Employee e, m, p;
    e.setData();
    e.setName("Ram");
    e.getData();

    m.setData();
    m.setName("Sham");
    m.getData();

    p.setData();
    p.setName("Rani");
    p.getData();
    return 0;
}