/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:50:41 by sfroidev          #+#    #+#             */
/*   Updated: 2024/01/12 21:08:07 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

	harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("WARNING");
    return 0;
}