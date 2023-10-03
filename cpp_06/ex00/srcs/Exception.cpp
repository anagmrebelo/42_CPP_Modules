/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:23:26 by arebelo           #+#    #+#             */
/*   Updated: 2023/10/03 16:02:01 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Exception.hpp"

const char	* INVException::what() const throw() 
{
	return ("Invalid input");
}
