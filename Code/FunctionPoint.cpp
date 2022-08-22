#include <iostream>
#include <vector>

using namespace std;

void PrintValue(int value)
{
    cout << value << " ";
}

void ForEach(vector<int> &values, void (*func)(int))
{
    for (int val : values)
        func(val);
    cout << endl;
}

int main()
{
    vector<int> values = {1, 5, 3, 4, 9, 7};
    // ForEach(values,PrintValue);
    ForEach(values, [](int val)
            { cout << "Value : " << val << endl; });
    return 0;
}