/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:28:20 by dteruya           #+#    #+#             */
/*   Updated: 2026/02/03 18:48:32 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const& min(T const& a, T const& b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T const& max(T const& a, T const& b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif