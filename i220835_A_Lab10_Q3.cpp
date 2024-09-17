#include"i220835_A_lab10_Q3.h"

matrix::matrix() {
	mat = nullptr;
	row = 0;
	col = 0;
}

matrix::matrix(int r, int c) {
	row = r;
	col = c;
	mat = new int* [row];
	for (int i = 0; i < row; i++) {
		mat[i] = new int[col];
	}
}

matrix::matrix(const matrix& m1) {
	row = m1.row;
	col = m1.col;
	mat = nullptr;
	mat = new int* [row];
	for (int i = 0; i < row; i++) {
		mat[i] = new int[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j <col; j++) {
			mat[i][j] = m1.mat[i][j];
		}
	}


}

matrix::~matrix() {
	for (int i = 0; i < row; i++) {
		delete[] mat[i];
	}
	delete[] mat;
	mat = nullptr;
}

void matrix::insert(){
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Entering val at index i:" << i << " j:" << j << " :";
			cin >> mat[i][j];
		}
	}
}

matrix& matrix::operator+(matrix& m1) {
	//matrix temp(m1);
	//for (int i = 0; i < row; i++) {
	//	for (int j = 0; j < col; j++) {
	//		temp.mat[i][j] = mat[i][j] + m1.mat[i][j];
	//	}
	//}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			this->mat[i][j] += m1.mat[i][j];
		}
	}

	return *this;
}

