#include <iostream>
#include <string>
#include <vector>
using namespace std;


int birthday(vector<int> s, int d, int m) {

	int counter{}, sum{};

	for (int i{}; i <= s.size() - m; i++) {
		sum = 0;
		for (int j{}; j < m; j++)
		{
			sum += s.at(i + j);
		}
		if (sum == d)
			counter++;
	}
	return counter;
}

int main() {

	vector<int> v{ 1, 2, 1, 3, 2 };


	birthday(v, 3, 2);

}

