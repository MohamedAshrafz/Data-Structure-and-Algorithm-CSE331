#include <iostream>
#include <string>
using namespace std;


string* reverse_string(string* s, int n)
{
	static int start = 0;
	static int end = n - 1;

	if (start >= end)
		return s;
	swap((*s)[start], (*s)[end]);
	start++;
	end--;
	s = reverse_string(s, n);
	return s;
}

string reverse_string(string s, int n) {
	static int start = 0;
	static int end = n - 1;

	if (start >= end)
		return s;
	swap(s[start], s[end]);
	start++;
	end--;
	s = reverse_string(s, n);
	return s;
}

int main() {
	string* s = new string;
	cin >> *s;
	s = reverse_string(s, (*s).length());
	cout << *s << endl;
	s = reverse_string(s, (*s).length());
	cout << *s << endl;
	return 0;
}

