// #include <iostream>
// using namespace std;

// int main()
// {
//     try
//     {
//         int age = 12;
//         if (age >= 18)
//         {
//             cout << "You are eligible to vote.";
//         }
//         else
//         {
//             throw(age);
//         }
//     }
//     catch (int age)
//     {
//         cout << "Sorry, you are not eligible to vote" << endl;
//         cout << "Your age is: " << age;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int x = -1;
    try {
        cout << "Try ";
        if (x < 0) {
            throw x;
            cout << "Throw ";
        }
    } catch (int x) {
        cout << "Caught ";
    }

    cout << "Exit";
    return 0;
}