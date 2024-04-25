/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:16:27 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/16 15:52:47 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(int size) {
    _numbers.reserve(size);
}

Span::Span(unsigned int N) : _NbrMax(N) {}

Span::Span(const Span &other) {
    _NbrMax = other._NbrMax;
    _numbers = other._numbers;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _NbrMax = other._NbrMax;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (_numbers.size() >= _NbrMax)
        throw std::runtime_error("Le Span est plein.");
    _numbers.push_back(num);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2)
        throw std::runtime_error("Pas assez de nombres pour calculer le span.");

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int shortest = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); ++i) {
        int diff = sortedNumbers[i] - sortedNumbers[i - 1];
        if (diff < shortest)
            shortest = diff;
    }

    return shortest;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2)
        throw std::runtime_error("Pas assez de nombres pour calculer le span.");

    return *std::max_element(_numbers.begin(), _numbers.end()) - *std::min_element(_numbers.begin(), _numbers.end());
}
