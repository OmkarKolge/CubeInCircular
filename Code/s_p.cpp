#include <iostream>
using namespace std;
#include <memory>

class Rectangle {
    int length;
    int breadth;

public:

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{

    shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    // This'll print 50
    cout <<  "P1 is "<<P1->area() << endl;

    shared_ptr<Rectangle> P2;
     shared_ptr<Rectangle> P3;// sharing the ownership
    P2 = P1;
    P3 = P2;

    // This'll print 50 as This'll now not give an error
    cout << "P2 is "<<P2->area() <<" and P1 is "<<P1->area()<< endl;

    // This'll also print 50 now
     cout << "P2 is "<<P2->area() <<" and P1 is "<<P1->area()<< "and P3 is "<<P3->area() << endl;
    
    // This'll print 3 as Reference Counter is 3 i.e there are 3 pointers pointing to the same memory location
    // The result will still be 3 even if P2.use_count() is used instead of P1.use_count()
    cout << "no. of pointers sharing the ownership is or pointing to the same memory location is "<<P1.use_count() << endl;
    return 0;
}