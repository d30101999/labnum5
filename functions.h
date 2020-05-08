#pragma once
#include "functions.h"

template < typename ForwardIterator, typename T >
bool all_of(ForwardIterator first, ForwardIterator last, T pred);

template < typename ForwardIterator, typename T >
bool one_of(ForwardIterator first, ForwardIterator last, T pred);

template < typename ForwardIterator, typename T>
ForwardIterator find_backward(ForwardIterator first, ForwardIterator last, T pred);

template < typename ForwardIterator, typename T>
ForwardIterator find_backward_by_value(ForwardIterator first, ForwardIterator last, T value);


class DividedByTwo
{
public:
	template < typename T >
	bool operator()(const T x) const;
};

