/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:05:59 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/19 20:05:27 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Adress of STR  " << &str << std::endl;
    std::cout << "STR Pointer address: " << stringPTR << std::endl;
    std::cout << "STR Referance address: " << &stringREF << std::endl;

    std::cout << "Value of STR: " << str << std::endl;
    std::cout << "STR Pointer value: " << *stringPTR << std::endl;
    std::cout << "STR Referance value: " << stringREF << std::endl;

}
