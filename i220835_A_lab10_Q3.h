#include<iostream>
using namespace std;

class matrix {
	int** mat;
	int row;
	int col;

public:
	matrix();
	matrix(int r, int c);
	matrix(const matrix& m1);
	~matrix();
	void insert();
	matrix& operator+(matrix& m1);
	void print() {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}


};