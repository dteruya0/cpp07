/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:49:16 by dteruya           #+#    #+#             */
/*   Updated: 2026/02/03 19:43:16 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElem(T const& x)
{
	std::cout << x << std::endl;
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	std::string strArray[] = {"ola", "cpp", "templates"};
	float floatArray[] = {1.1f, 2.2f, 3.3f};

	std::cout << "Int array:" << std::endl;
	iter(intArray, 5, printElem<int>);

	std::cout << "\nString array:" << std::endl;
	iter(strArray, 3, printElem<std::string>);

	std::cout << "\nFloat array:" << std::endl;
	iter(floatArray, 3, printElem<float>);

	return 0;
}