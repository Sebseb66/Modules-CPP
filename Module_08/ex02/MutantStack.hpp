/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:18:08 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/16 16:07:14 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack();
	MutantStack(const MutantStack& other);

	MutantStack& operator=(const MutantStack& other);

	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();

};

#include "MutantStack.tpp"

#endif

// #include <list>

// class MyList : public std::list<int>
// {
// public:
//     typedef std::list<int>::iterator iterator;
// };

// #endif
