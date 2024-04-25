/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:59:15 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/26 11:17:59 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

char ScalarConverter::convertToChar(double value)
{
	if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
	{
		throw std::runtime_error("Impossible");
	}
	char c = static_cast<char>(value);
	if (!isprint(c))
	{
		throw std::runtime_error("Non displayable");
	}
	return c;
}

int ScalarConverter::convertToInt(double value)
{
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || std::isnan(value))
	{
		throw std::runtime_error("Impossible");
	}
	return static_cast<int>(value);
}

float ScalarConverter::convertToFloat(double value)
{
	if (std::isnan(value))
	{
		if (value > 0)
		{
			return std::numeric_limits<float>::infinity();
		}
		else
		{
			return -std::numeric_limits<float>::infinity();
		}
	}
	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
	{
		throw std::runtime_error("Impossible");
	}
	return static_cast<float>(value);
}

double ScalarConverter::convertToDouble(const std::string& literral)
{
	if (literral.length() == 1 && isalpha(literral[0]))
	{
		return static_cast<double>(literral[0]);
	}
	else if (literral.length() == 1 && isdigit(literral[0]))
	{
		return static_cast<double>(literral[0] - '0');
	}
	std::istringstream iss(literral);
	double value;
	iss >> value;

	if (literral == "nan" || literral == "nanf")
	{
		return std::numeric_limits<double>::quiet_NaN();
	}
	else if (literral == "+inf" || literral == "+inff")
	{
		return std::numeric_limits<double>::infinity();
	}
	else if (literral == "-inf" || literral == "-inff")
	{
		return -std::numeric_limits<double>::infinity();
	}
	if (iss.fail())
	{
		throw std::runtime_error("Impossible");
	}
	return value;
}

void ScalarConverter::convert(const std::string& literal)
{
	double baseValue;

	if (literal == "nan" || literal == "nanf")

	{
		baseValue = std::numeric_limits<double>::quiet_NaN();
	} 
	else 
	{
	try 
	{
		baseValue = convertToDouble(literal);
	}
	catch (const std::exception& e)
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
		return;
		}
	}

	if (std::isnan(baseValue))
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
		return;
		}
		
	try
	{
		char c = convertToChar(baseValue);
		std::cout << "char: '" << c << "'\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "char: " << e.what() << '\n';
	}

	try
	{
		int i = convertToInt(baseValue);
		std::cout << "int: " << i << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "int: " << e.what() << '\n';
	}

	try
	{
		float f = convertToFloat(baseValue);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float: " << f << "f\n";
	}
	catch (const std::exception& e)
	{
		std::cout << "float: " << e.what() << '\n';
	}

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "double: " << baseValue << "\n";	
}