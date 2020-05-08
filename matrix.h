#pragma once
#include <string>
using namespace std;

class IndexException
{
private:
	string m_error;

public:
	IndexException(std::string error)
		: m_error(error)
	{
	}

	const char* getError();
};


class submas
{
public:
	class T* sarr;

	template <size_t N, size_t M, class T>
	submas();
	template <size_t N, size_t M, class T>
	submas(int size);
	template <size_t N, size_t M, class T>
	T& operator [] (int i);
};

class MMassive
{
private:
	class submas;
	int row, col;
	submas* arr;

public:
	template <size_t N, size_t M, class T>
	MMassive();

	template <size_t N, size_t M, class T>
	submas& operator [] (int i)
	{
		if (i < 0 || i >= N)
			throw IndexException("Invalid index");
		return arr[i];
	}
};

