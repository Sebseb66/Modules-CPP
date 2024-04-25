/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:00:05 by sfroidev          #+#    #+#             */
/*   Updated: 2024/03/25 15:03:38 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS
# define CLASS

# include <iostream>
# include <cstdlib>

class Base 
{
	public:

		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif