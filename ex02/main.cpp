/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:34:11 by dteruya           #+#    #+#             */
/*   Updated: 2026/02/05 14:36:02 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

int main()
{
	std::cout << "=== Test 1: default constructor ===" << std::endl;
	Array<int> a;
	std::cout << "size: " << a.size() << std::endl;

	std::cout << "\n=== Test 2: constructor with size ===" << std::endl;
	Array<int> b(5);
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i * 10;

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << "b[" << i << "] = " << b[i] << std::endl;

	std::cout << "\n=== Test 3: copy constructor ===" << std::endl;
	Array<int> c(b);
	c[0] = 999;

	std::cout << "Original b[0]: " << b[0] << std::endl;
	std::cout << "Copy c[0]: " << c[0] << std::endl;

	std::cout << "\n=== Test 4: assignment operator ===" << std::endl;
	Array<int> d;
	d = b;
	d[1] = 777;

	std::cout << "Original b[1]: " << b[1] << std::endl;
	std::cout << "Assigned d[1]: " << d[1] << std::endl;

	std::cout << "\n=== Test 5: const Array ===" << std::endl;
	const Array<int> e(b);
	std::cout << "e[2] = " << e[2] << std::endl;
	std::cout << "size e: " << e.size() << std::endl;

	std::cout << "\n=== Test 6: exceptions ===" << std::endl;
	try
	{
		std::cout << b[100] << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Exception caught: " << ex.what() << std::endl;
	}

	try
	{
		b[-1] = 42;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Exception caught: " << ex.what() << std::endl;
	}

	std::cout << "\n=== End of tests ===" << std::endl;
	return 0;
}

