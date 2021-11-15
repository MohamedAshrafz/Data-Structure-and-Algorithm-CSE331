#include <iostream>
#include <string>
using namespace std;


string reverse_string(string s, int n)
{
	if (n == 1)
		return s;

	string tempStr{ s.at(0) };
	s.at(0) = s.at(n - 1);
	s.at(n - 1) = tempStr.at(0);

	if (n == 2) {
		return s;
	}

	string partaioningStr{ s.substr(1, n - 2) };

	partaioningStr = reverse_string(partaioningStr, n - 2);

	for (int i = 1; i < n - 1; i++)
		s.at(i) = partaioningStr.at(i - 1);

	return s;
}

int main() {
	string s;
	cin >> s;
	s = reverse_string(s, s.length());
	cout << s << endl;
	s = reverse_string(s, s.length());
	cout << s << endl;
	return 0;
}

