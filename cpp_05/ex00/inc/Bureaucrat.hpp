/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:39:44 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:50:04 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include <stdexcept>

class	Bureaucrat
{
public:
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	Bureaucrat &	operator=( Bureaucrat const & rhs );

	std::string const &	getName( void ) const;
	int					getGrade( void ) const;
	
	void				increaseGrade( void );
	void				decreaseGrade( void );
	
	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};

private:
	const std::string	_name;
	int					_grade;
	
	Bureaucrat( void );
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
