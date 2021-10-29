#include "bits-stdc++.h"

using namespace std;


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
	friend ostream& operator<<(std::ostream& os, Box& box);
public:
	Box()
		:Box(0, 0, 0) {}

	Box(int lenght, int breadth, int height)
		: l{ lenght }, b{ breadth }, h{ height } {}

	Box(const Box& that)
		: Box(that.l, that.b, that.h) {}

	int getLength() {
		return this->l;
	}
	int getBreadth() {
		return this->b;
	}
	int getHeight() {
		return this->h;
	}

	bool operator<(const Box& rhs) {
		if (this->l < rhs.l) {
			return true;
		}
		else if ((this->l == rhs.l) && (this->b < rhs.b)) {
			return true;
		}
		else if ((this->l == rhs.l) && (this->b == rhs.b) && (this->h < rhs.h)) {
			return true;
		}

		return false;
	}

	long long CalculateVolume() {
		long long calc{};
		calc = static_cast <long long> (l) * static_cast <long long> (b);
		calc *= static_cast <long long> (h);
		return calc;
	}

private:
	int l, b, h;
};

ostream& operator<<(std::ostream& os, Box& box) {
	os << box.getLength() << " " << box.getBreadth() << " " << box.getHeight();
	return os;
}

void check2()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main()
{
	check2();
}