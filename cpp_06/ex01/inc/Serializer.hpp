/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:15:10 by arebelo           #+#    #+#             */
/*   Updated: 2023/10/04 12:25:31 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER__HPP
# define __SERIALIZER__HPP

#include "Data.hpp"
#include <stdint.h> 

class Serializer
{
public:
	static uintptr_t	serialize(Data* ptr);
	static Data* 		deserialize(uintptr_t raw);

private:
	Serializer( void );
	Serializer( Serializer const & src );
	~Serializer( void );
	Serializer &	operator=( Serializer const & rhs );

};

#endif