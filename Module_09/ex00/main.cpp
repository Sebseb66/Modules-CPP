/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:02:12 by sfroidev          #+#    #+#             */
/*   Updated: 2024/04/25 16:02:45 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./btc <input file>" << std::endl;
        return 1;
    }

    BitcoinExchange btc("data.csv");
    btc.evaluateBitcoinValues(argv[1]);

    return 0;
}