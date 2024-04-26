/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:24:36 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/02 17:24:56 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <sstream>
#include <iostream>
#include <cstdlib>

class RPN
{

public:
	RPN();
	RPN(const RPN& other);

	RPN& operator=(const RPN& other);

	~RPN();

	int evaluate(const std::string& expression);

private:
	std::stack<int> stack;

	bool processToken(const std::string& token);
	bool performOperation(const char operation);

};

#endif
