#include"i220835_A_Lab10_Q1.h"

Money::Money() {
	this->dollar = 0;
	this->cents = 0;
}

Money::Money(int dollar, int cents) {
	this->dollar = dollar;
	this->cents = cents;
}


Money& Money:: operator= (const Money& right) {
//	Money temp;
	this->dollar = right.dollar;
	this->cents = right.cents;
	return *this;
}

bool Money::operator== (const Money& right) {
	return((dollar == right.dollar) && (cents == right.cents));
}

Money& Money:: operator+= (const Money& right) {

	this->dollar += right.dollar;
	this->cents += right.cents;
	if (this->cents > 99) {
		this->dollar++;
		this->cents -= 100;
	}

	return *this;

}

Money& Money:: operator-= (const Money & right) {

	this->dollar -= right.dollar;
	this->cents -= right.cents;

	if (this->cents < 0) {
	this->cents += 100;
	this->dollar--;
	}

	return *this;
}

Money& Money:: operator*= (int x) {

	this->dollar *= x;
	this->cents *= x;
	while (this->cents >= 100) {
		this->dollar++;
		this->cents -= 100;
	}
	return *this;


}

Money& Money::operator/= (int x) {
	if (this->cents == 0) {
		this->cents += 100;
		this->dollar--;
	}
	this->cents/= x;
	if (this->dollar == 1) {
		this->cents += 50;
	}
	this->dollar /= x;
	return *this;

}

Money& Money:: operator++ () {
	Money *temp=new Money;
	dollar++;
	temp->dollar = dollar;
	temp->cents = cents;
	return *temp;
}

Money& Money:: operator++ (int a) {
	Money *temp=new Money;
	temp->dollar = dollar;
	dollar++;
	temp->cents = cents;
	return *temp;
}

void Money::print() {
	cout << dollar << " dollar, " << cents << " cents" << endl << endl;
}

Money::~Money() {
	dollar = 0;
	cents = 0;;
}


