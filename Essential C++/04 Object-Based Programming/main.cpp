#include<iostream>
#include<istream>
#include"Stack.h"
#include"Triangular.h"
#include"Matrix.h"
#include<string>
using namespace std;
void fill_stack(Stack &stack,ostream &os = cout, istream &is = cin);
void test_Stack();
void test_Triangular();
void test_Matrix();
int main() {
	//test_Stack();
	//test_Triangular();
	test_Matrix();
	system("pause");
	return 0;
}

void test_Matrix() {
	Matrix mat(5,5);
	Matrix mat2 = mat;
	Matrix mat3(mat);
	mat3 = mat;
}

void test_Triangular() {
	Triangular t5();
}

void test_Stack() {
	Stack stack;
	//stack.setMaxSize(10);
	fill_stack(stack);
	string str;
	cin >> str;
	if (stack.find(str)) {
		cout << "find it " << stack.count(str) << " times " << endl;
	}
	else {
		cout << "no" << endl;
	}
}

void fill_stack(Stack &stack, ostream &os, istream &is) {
	string str;
	while (is >> str && !stack.full() && str != "out") {
		stack.push(str);
	}
	os << stack.size() << endl;
	os << stack.maxSize() << endl;
	os << "Read in " << stack.size() << " elements\n" << endl;
}