/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:01:08 by mboyansa          #+#    #+#             */
/*   Updated: 2023/12/14 16:34:44 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[9];
		int counter;
		int b;
	private:
		void	CrtDisplay(std::string str, int a);
		void	Display(void);

		std::string	take_input(std::string str)
		{
			std::string	input;
			while (input.empty())
			{
				std::cout << str;
				std::getline(std::cin, input);
			}
			return (input);
		}

	public:
		PhoneBook()
		{
			counter = 0;
			b = 0;
		}
		void    AddContact();
		void	Search();
};

#endif