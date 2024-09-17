#include<iostream>
using namespace std;

class  Money {
	int dollar;
	int cents;

public:
	Money();

	Money(int dollar, int cents);

	Money& operator= (const Money& right);

	bool operator== (const Money& right);

	Money& operator+= (const Money& right);

	Money& operator-= (const Money& right);

	Money& operator*= (int x);

	Money& operator/= (int x);

	Money& operator++ ();

	Money& operator++ (int a);

	void print();

	~Money();

};
