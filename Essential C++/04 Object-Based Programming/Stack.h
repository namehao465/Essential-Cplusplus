#pragma once
#include<vector>
#include<string>
#include<iostream>
using namespace std;
class Stack {
public:
	bool push(const string&);
	bool pop(string &elem);
	bool peek(string &elem);

	bool empty();
	bool full();

	bool find(const string &elem);
	int count(const string &elem);

	//void setMaxSize(const int &max_size) {
	//	_stack.max_size = max_size;
	//}

	int maxSize() {
		return _stack.max_size();
	}

	int size() { return _stack.size(); }
private:
	vector<string> _stack;
};