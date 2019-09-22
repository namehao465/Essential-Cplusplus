#pragma once
class Matrix
{
public:
	Matrix();
	Matrix(int row,int col);
	Matrix(const Matrix &mat);
	~Matrix();
	Matrix& operator=(const Matrix &mat);

private:
	int _row;
	int _col;
	double *_pmat;
};

Matrix::Matrix()
{

}

Matrix::Matrix(int row, int col):_row(row),_col(col)
{
	cout << "Matrix::Matrix(int row, int col):_row(row),_col(col)" << endl;
	_pmat = new double[_row*_col];
}

Matrix::Matrix(const Matrix & mat)
{
	cout << "Matrix::Matrix(const Matrix & mat)" << endl;
	_row = mat._row;
	_col = mat._col;
	_pmat = new double[_row*_col];
	for (int i = 0; i < _row*_col; i++)
	{
		_pmat[i] = mat._pmat[i];
	}
}


Matrix::~Matrix()
{
	delete[]_pmat;
}

// 返回值为引用Matrix&时，不会调用拷贝构造函数
// 返回值为Matrix时，会调用拷贝构造函数
Matrix& Matrix::operator=(const Matrix & mat)
{
	cout << "Matrix Matrix::operator=(const Matrix & mat)" << endl;
	if (this != &mat) {
		_row = mat._row;
		_col = mat._col;
		delete[]_pmat;
		_pmat = new double[_row*_col];
		for (int i = 0; i < _row*_col; i++)
		{
			_pmat[i] = mat._pmat[i];
		}
	}
	return *this;
}
