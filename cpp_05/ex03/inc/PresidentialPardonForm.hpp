/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:52:18 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:56:22 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	~PresidentialPardonForm( void );

	PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );

	std::string const &	getTarget( void ) const;

	void		execute( Bureaucrat & executor ) const;
	AForm *		clone( void ) const;

private:
	const std::string	_target;
	
	PresidentialPardonForm( void );
};

std::ostream &	operator<<( std::ostream & o, PresidentialPardonForm const & rhs );

#endif
