/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:34:07 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/11 16:10:01 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int a, char **args)
{
    int i(0), j(-1);

    if (a >= 2)
    {
        while (args[++i])
		{
			j = -1;
			while (args[i][++j])
				std::cout << (char)toupper(args[i][j]);
		}
		std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
