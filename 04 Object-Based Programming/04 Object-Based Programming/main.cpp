#include<iostream>
#include<istream>
#include"Stack.h"
#include<string>
using namespace std;
void fill_stack(Stack &stack, istream &is = cin);
int main() {
	Stack stack;
	fill_stack(stack);
	return 0;
}

void fill_stack(Stack &stack, istream &is) {
	string str;
	while (cin >> str && !stack.full()) {
		stack.push(str);
	}

	cout << "Read in " << stack.size() << " elements\n";
}