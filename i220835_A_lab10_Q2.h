#include<iostream>
using namespace std;


class String {
	char* s;
	int size;

public:
	String();
	String(int s);
	String(char* S, int si);
	String& operator+(const String& s1);
	bool operator<(const String& s1);
	bool operator>(const String& s1);
	bool operator==(const String& s1);

	void print();
};