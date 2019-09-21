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
	_stack.push_back(elem);

	return true;
}

bool Stack::full() { return true; }

bool Stack::peek(string &elem) { return true; }