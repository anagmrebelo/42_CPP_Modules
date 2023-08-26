/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:17:50 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/20 01:27:34 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __EXCEPTION_H__
# define __EXCEPTION_H__

class INVException : public std::exception
{
public:
	const char *	what() const throw();
};

#endif
