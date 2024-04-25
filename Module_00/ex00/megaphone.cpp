/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:43:40 by sfroidev          #+#    #+#             */
/*   Updated: 2023/12/26 16:25:35 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; ++i)
        {
            for (int j = 0; av[i][j]; ++j)
            {
                av[i][j] = std::toupper(av[i][j]);
                std::cout << av[i][j];
            }
            if (i < ac - 1)
            {
                std::cout << " ";
            }
        }           
        std::cout << std::endl;
    }
    return (0);
}
