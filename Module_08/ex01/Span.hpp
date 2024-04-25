/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:16:10 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/16 15:46:12 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:

		std::vector<int> _numbers;
		unsigned int _NbrMax;

	public:

		Span();
		Span(int size);
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int number);
		template<typename InputIterator>
    	void addRange(InputIterator begin, InputIterator end);
		
		int shortestSpan() const;
		int longestSpan() const;
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

template<typename InputIterator>
void Span::addRange(InputIterator begin, InputIterator end) {
    while (begin != end) {
        addNumber(*begin);
        ++begin;
    }
}

#endif