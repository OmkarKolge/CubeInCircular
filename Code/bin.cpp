#include <iostream>
#include <string>

using namespace std;

class Binary
{
private:
    string s;
    void check_bin();

public:
    void read();
    void ones_compliment();
    void display();
};

void Binary::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary::ones_compliment()
{
    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    b.ones_compliment();
    b.display();
    return 0;
}
