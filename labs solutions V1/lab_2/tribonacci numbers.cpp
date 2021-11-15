#include <iostream>
using namespace std;


long long tribonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;

	long long trib{};
	long long tribArr[] = { 0, 1, 1 };

	for (int i = 3; i <= n; i++) {
		trib = tribArr[0] + tribArr[1] + tribArr[2];
		cout << "tribonacci of " << i << " = " << trib << endl;
		tribArr[0] = tribArr[1];
		tribArr[1] = tribArr[2];
		tribArr[2] = trib;
	}

	return trib;
}

int main() {
	while (true)
	{
		int n;
		cin >> n;
		tribonacci(n);
		return 0;

	}
}

