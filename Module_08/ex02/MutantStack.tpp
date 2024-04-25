/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:18:21 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/02 17:18:51 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other)
{
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
	std::stack<T>::operator=(other);

	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}
