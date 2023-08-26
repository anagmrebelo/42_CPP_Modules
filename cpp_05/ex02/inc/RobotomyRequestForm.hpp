/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:07:45 by arebelo           #+#    #+#             */
/*   Updated: 2022/07/17 16:07:49 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <fstream>
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );

	std::string	const & getTarget( void ) const;

	void		execute( Bureaucrat & executor ) const;

private:
	const std::string	_target;

	RobotomyRequestForm( void );
};

std::ostream &	operator<<( std::ostream & o, RobotomyRequestForm const & rhs );

#endif
