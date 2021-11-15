#include <iostream>
using namespace std;

long long fibonacci(int n);

int main() {
	while (true) {
		int n;
		cin >> n;
		fibonacci(n);
	}
	return 0;
}


long long fibonacci(int n) {

	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	cout << "fib of 0 = 0" << endl;
	long long fibnNegTwo{ 0 };
	cout << "fib of 1 = 1" << endl;
	long long fibnNegOne{ 1 };
	long long fib{ 0 };


	for (int i = 2; i <= n; i++) {
		fib = fibnNegOne + fibnNegTwo;
		cout << "fib of " << i << " = " << fib << endl;
		fibnNegTwo = fibnNegOne;
		fibnNegOne = fib;
	}

	return fib;

}