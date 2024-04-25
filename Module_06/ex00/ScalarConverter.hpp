/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:59:20 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/26 11:07:24 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <limits>


class ScalarConverter 
{
	public:
		static void convert(const std::string& literal);
	
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&);

		ScalarConverter& operator=(const ScalarConverter&);

		~ScalarConverter();

		static char convertToChar(double value);
		static int convertToInt(double value);
		static float convertToFloat(double value);
		static double convertToDouble(const std::string& literal);
};

#endif