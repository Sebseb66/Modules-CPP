/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:26:09 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/23 09:44:37 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <climits>

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    (void)other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::sortAndDisplay(std::vector<int>& numbers)
{
    std::cout << "\nAvant le tri: \n";
    displaySequence("Vecteur: ", numbers);

    clock_t start = clock();
    sortVector(numbers);
    clock_t end = clock();

    std::cout << "\nAprès le tri: \n";
    displaySequence("Vecteur: ", numbers);

    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "\nTemps de traitement (std::vector): " << elapsed << " secondes.\n" << std::endl;
}

void PmergeMe::sortAndDisplay(std::list<int>& numbers)
{
    std::cout << "\nAvant le tri: \n";
    displaySequence("Liste: ", numbers);

    clock_t start = clock();
    sortLinkedList(numbers);
    clock_t end = clock();

    std::cout << "\nAprès le tri: \n";
    displaySequence("Liste: ", numbers);

    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "\nTemps de traitement (std::list): " << elapsed << " secondes.\n" << std::endl;
}

void PmergeMe::displaySequence(const std::string& text, const std::vector<int>& numbers)
{
    std::cout << text;
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::displaySequence(const std::string& text, const std::list<int>& numbers)
{
    std::cout << text;
    for (std::list<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::mergeVector(std::vector<int>& vec, const std::vector<int>& left, const std::vector<int>& right)
{
    size_t leftIndex = 0, rightIndex = 0, vecIndex = 0;

    while (leftIndex < left.size() && rightIndex < right.size())
    {
        if (left[leftIndex] <= right[rightIndex])
        {
            vec[vecIndex++] = left[leftIndex++];
        }
        else
        {
            vec[vecIndex++] = right[rightIndex++];
        }
    }

    while (leftIndex < left.size())
    {
        vec[vecIndex++] = left[leftIndex++];
    }

    while (rightIndex < right.size())
    {
        vec[vecIndex++] = right[rightIndex++];
    }
}

void PmergeMe::sortVector(std::vector<int>& vec)
{
    if (vec.size() <= 1) return;

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < vec.size(); i += 2)
    {
        if (i + 1 < vec.size())
        {
            pairs.push_back(std::make_pair(std::min(vec[i], vec[i + 1]), std::max(vec[i], vec[i + 1])));
        }
        else
        {
            pairs.push_back(std::make_pair(vec[i], INT_MAX));
        }
    }

    std::vector<int> firstHalf;
    for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
    {
        std::pair<int, int>& pair = *it;
        firstHalf.push_back(pair.first);
    }
    sortVector(firstHalf);

    std::vector<int> secondHalf;
    for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
    {
        std::pair<int, int>& pair = *it;
        if (pair.second != INT_MAX)
        {
            secondHalf.push_back(pair.second);
        }
    }
    sortVector(secondHalf);

    std::vector<int> merged(vec.size());
    mergeVector(merged, firstHalf, secondHalf);
    vec = merged;
}

void PmergeMe::mergeLinkedList(std::list<int>& list, std::list<int>& left, std::list<int>& right) {
    list.clear();

    std::list<int>::iterator itLeft = left.begin();
    std::list<int>::iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft <= *itRight)
        {
            list.push_back(*itLeft++);
        } else {
            list.push_back(*itRight++);
        }
    }

    while (itLeft != left.end())
    {
        list.push_back(*itLeft++);
    }
    while (itRight != right.end())
    {
        list.push_back(*itRight++);
    }
}

void PmergeMe::sortLinkedList(std::list<int>& list)
{
    if (list.size() <= 1) return;

    std::list<int>::iterator middle = list.begin();
    std::advance(middle, list.size() / 2);

    std::list<int> left(list.begin(), middle);
    std::list<int> right(middle, list.end());

    sortLinkedList(left);
    sortLinkedList(right);

    mergeLinkedList(list, left, right);
}

long long int PmergeMe::getCurrentMicroseconds() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return static_cast<long long int>(time.tv_sec) * 1000000 + time.tv_usec;
}

void PmergeMe::sortAndCompare(std::vector<int>& vec, std::list<int>& list) {
    list.assign(vec.begin(), vec.end());

    long long startTime = getCurrentMicroseconds();
    sortVector(vec);
    long long endTime = getCurrentMicroseconds();
    std::cout << "Time for std::vector: " << (endTime - startTime) << " microseconds." << std::endl;

    startTime = getCurrentMicroseconds();
    sortLinkedList(list);
    endTime = getCurrentMicroseconds();
    std::cout << "Time for std::list: " << (endTime - startTime) << " microseconds." << std::endl;
}