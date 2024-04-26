/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:26:18 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/23 09:44:34 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <sys/time.h>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void sortAndDisplay(std::vector<int>& numbers);
    void sortAndDisplay(std::list<int>& numbers);
    void sortAndCompare(std::vector<int>& vec, std::list<int>& list);

private:

    void displaySequence(const std::string& text, const std::vector<int>& numbers);
    void displaySequence(const std::string& text, const std::list<int>& numbers);

    void mergeVector(std::vector<int>& vec, const std::vector<int>& left, const std::vector<int>& right);
    void sortVector(std::vector<int>& vec);
    void mergeLinkedList(std::list<int>& vec, std::list<int>& left, std::list<int>& right);
    void sortLinkedList(std::list<int>& list);
    long long int getCurrentMicroseconds();
    
};

#endif
