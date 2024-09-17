#include"i220835_A_lab10_Q2.h"

String::String() {
	s = nullptr;
	size = 0;
}

String::String(int s) {
	size = s;
	this->s = new char[size];
}


String::String(char* S, int si) {
	int x = 0;
	while (S[x] != '\0') {
		x++;
	}
	s = new char[x+1];
	size = si;
	for (int i = 0; i <= x; i++) {
		s[i] = S[i];
	}
}
String& String:: operator+(const String& s1) {
	int ts = size + s1.size;
	String temp(ts);
	for (int i = 0; i < size-1; i++) {
		temp.s[i] = this->s[i];
	}
	for (int i = 0; i < s1.size; i++) {
		temp.s[i+size-1] = s1.s[i];
	}
	return temp;
}

bool String:: operator<(const String& s1) {
	int x = 0;
	while (s[x] != '\0' || s1.s[x] != '\0') {
		if (s[x] == s1.s[x]) {
			continue;
		}
		else if (s[x] < s1.s[x]) {
			return true;
		}
		else {
			return false;
		}
		x++;
	}
}

bool String:: operator>(const String& s1) {
	int x = 0;
	while (s[x] != '\0' || s1.s[x] != '\0') {
		if (s[x] == s1.s[x]) {
			continue;
		}
		else if (s[x] > s1.s[x]) {
			return true;
		}
		else {
			return false;
		}
		x++;
	}
}


bool String:: operator==(const String& s1) {
	int x = 0;
	bool flag = 0;
	while (s[x] != '\0' || s1.s[x] != '\0') {
		if (s[x] == s1.s[x]) {
			flag = 1;
			continue;
		}
		else {
			flag = 0;
		}
		x++;
	}
	return flag;
}

void String::print() {
	cout << s << endl;
}

