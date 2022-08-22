#include<iostream>
using namespace std;

int main() {

  // lambda function with explicit return type 'double'
  // returns the sum or the average depending on operation
  auto operation = []  (int a, int b,  string op) -> double {
    if (op == "sum") {
      return a + b;
    }
    else {
      return (a + b) / 2.0;
    }
  };

  int num1 = 1;
  int num2 = 2;

  // find the sum of num1 and num2
  auto sum = operation(num1, num2, "sum");
  cout << "Sum = " << sum << endl;

  // find the average of num1 and num2
  auto avg = operation(num1, num2, "avg");
  cout << "Average = " << avg;

  return 0;
}

// // compile with: /W4 /EHsc
// #include <algorithm>
// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// template <typename C>
// void print(const string &s, const C &c)
// {
//     cout << s;

//     for (const auto &e : c)
//     {
//         cout << e << " ";
//     }

//     cout << endl;
// }

// void fillVector(vector<int> &v)
// {
//     // A local static variable.
//     static int nextValue = 1;

//     // The lambda expression that appears in the following call to
//     // the generate function modifies and uses the local static
//     // variable nextValue.
//     generate(v.begin(), v.end(), []
//              { return nextValue++; });
//     // WARNING: this isn't thread-safe and is shown for illustration only
// }

// int main()
// {
//     // The number of elements in the vector.
//     const int elementCount = 9;

//     // Create a vector object with each element set to 1.
//     vector<int> v(elementCount, 1);

//     // These variables hold the previous two elements of the vector.
//     int x = 1;
//     int y = 1;

//     // Sets each element in the vector to the sum of the
//     // previous two elements.
//     generate_n(
//         v.begin() + 2,
//         elementCount - 2,
//         [=]() mutable throw()->int { // lambda is the 3rd parameter
//             // Generate current value.
//             int n = x + y;
//             // Update previous two values.
//             x = y;
//             y = n;
//             return n;
//         });
//     print("vector v after call to generate_n() with lambda: ", v);

//     // Print the local variables x and y.
//     // The values of x and y hold their initial values because
//     // they are captured by value.
//     cout << "x: " << x << " y: " << y << endl;

//     // Fill the vector with a sequence of numbers
//     fillVector(v);
//     print("vector v after 1st call to fillVector(): ", v);
//     // Fill the vector with the next sequence of numbers
//     fillVector(v);
//     print("vector v after 2nd call to fillVector(): ", v);
// }