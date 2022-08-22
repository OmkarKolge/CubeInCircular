#include <iostream>

using namespace std;

int fact(int a) {
	if (a != 0) {
		return a * fact(a - 1);
	}
	else {
		return 1;
	}
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

static int n1 = 0, n2 = 1, n3 = 0;

void fibo(int b) {
	if(b>0){
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout << " " << n3;
		fibo(b - 1);
	}
}

int main() {
	int a;
	cout << "Enter Number " << endl;
	cin >> a;
	cout << "Factorial of " << a << " is " << fact(a) << endl;

    // int b;
    // cout << "Enter a number"<<endl;
    // cin >> b;
    // cout << "The term in fibonacci sequence at position " << b << " is " << fib(b) << endl;

    int c;
	cout << "Enter c" << endl;
	cin >> c;
	cout << "Fibonacci series" << endl;
	cout << n1 << " " << n2;
	fibo(c-2);
    cout<<"\n*****";
	return 0;
}