#pragma once
class Triangular
{
public:
	Triangular();
	Triangular(int len);
	Triangular(int len,int beg_pos);
	~Triangular();

private:
	int _length;
	int _beg_pos;
	int _next;
};

Triangular::Triangular()
{
	cout<<"Triangular::Triangular()"<<endl;
	_length = 1;
	_beg_pos = 1;
	_next = 0;
}

Triangular::Triangular(int len)
{
	_length = len > 0 ? len : 1;
	_beg_pos = 1;
	_next = 0;
}

Triangular::Triangular(int len, int beg_pos)
{
	_length = len > 0 ? len : 1;
	_beg_pos = beg_pos > 0 ? beg_pos : 1;
	_next = 0;
}

Triangular::~Triangular()
{
}