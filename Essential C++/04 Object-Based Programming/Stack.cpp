#include"Stack.h"


bool Stack::empty() {
	return _stack.empty();
}

bool Stack::pop(string &elem) {
	if (empty()) {
		return false;
	}
	elem = _stack.back();
	_stack.pop_back();
	return true;
}

bool Stack::push(const string&elem) {
	if (full()) {
		return false;
	}
	_stack.push_back(elem);

	return true;
}

bool Stack::full() { 
	return _stack.size() == _stack.max_size(); 
}

bool Stack::peek(string &elem) { 
	if (empty()) {
		return false;
	}
	elem = _stack.back();
	return true; 
}

bool Stack::find(const string &elem) {
	vector<string>::iterator begin = _stack.begin();
	vector<string>::iterator end = _stack.end();
	for (; begin != end; ++begin) {
		if (elem == *begin) {
			return true;
		}
	}
	return false;
}

int Stack::count(const string &elem) {
	int count = 0;
	vector<string>::iterator begin = _stack.begin();
	vector<string>::iterator end = _stack.end();
	for (; begin != end; ++begin) {
		if (elem == *begin) {
			count++;
		}
	}
	return count;
}