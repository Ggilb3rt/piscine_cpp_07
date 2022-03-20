#ifndef ITER_H
#define ITER_H

#include <iostream>

template< typename T>
void	iter(T arr[], size_t const arrLength, void f(T const & arr)) {
	for (size_t i = 0; i < arrLength; i++)
	{
		f(arr[i]);
	}
}

#endif