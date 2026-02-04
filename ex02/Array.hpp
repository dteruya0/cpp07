/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:45:14 by dteruya           #+#    #+#             */
/*   Updated: 2026/02/04 19:00:16 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
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
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int size() const;
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

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != other)
	{
		delete[] data;

		_size = other._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = other._data[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _data[index];
}

template <typename T>

#endif