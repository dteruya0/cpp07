/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:45:14 by dteruya           #+#    #+#             */
/*   Updated: 2026/02/03 20:37:56 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#define DEBUG false

template <typename T>
class Array
{
	private:
		T* _data;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
};

template <typename T>
Array<T>::Array()
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
	_data = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (DEBUG)
		std::cout << "Default parameter constructor called" << std::endl;
	_size = n;
	_data = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other)
	: _data(NULL), _size(other._size)
{
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;

	if (_size > 0)
	{
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = other._data[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] _data;
}

#endif