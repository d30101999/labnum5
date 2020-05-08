#include "matrix.h"

template <size_t N, size_t M, class T>
submas::submas()
{}

template <size_t N, size_t M, class T>
submas::submas(int size)
{
	sarr = new T[size];
	for (int i = 0; i < size; i++)
	{
		sarr[i] = 0;
	}
}

template <size_t N, size_t M, class T>
T& submas::operator [] (int i)
{
	if (i < 0 || i >= M)
		throw IndexException("Invalid index");
	return sarr[i];
}

template <size_t N, size_t M, class T>
MMassive::MMassive()
{
	N < 1 ? row = 1 : row = N;
	M < 1 ? col = 1 : col = M;

	arr = new submas[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = submas(col);
	}
}


const char* IndexException::getError() { return m_error.c_str(); }