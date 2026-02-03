/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:49:13 by dteruya           #+#    #+#             */
/*   Updated: 2026/02/03 19:43:31 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T const *a, int const length, void (*f)(T const &))
{
	int i = 0;
	while (i < length)
	{
		f(a[i]);
		i++;
	}
}

template <typename T>
void iter(T *a, int length, void (*f)(T &))
{
	int i = 0;
	while (i < length)
	{
		f(a[i]);
		i++;
	}
}

#endif