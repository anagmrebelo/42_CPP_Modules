/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:25:17 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:50:56 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBERRYCREATIONFORM_HPP__
# define __SHRUBERRYCREATIONFORM_HPP__

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );

	std::string	const & getTarget( void ) const;

	void		execute( Bureaucrat & executor ) const;

private:
	const std::string	_target;

	ShrubberyCreationForm( void );
};

std::ostream &	operator<<( std::ostream & o, ShrubberyCreationForm const & rhs );

#endif
