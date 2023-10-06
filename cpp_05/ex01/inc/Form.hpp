/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:19:50 by arebelo           #+#    #+#             */
/*   Updated: 2023/10/06 16:25:32 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
public:
	Form( std::string name, int gradeSign, int gradeExec );
	Form( Form const & src );
	~Form( void );

	Form &	operator=( Form const & rhs );

	std::string	const & getName( void ) const;
	bool		getSignedStatus( void ) const;
	int			getGradeSign( void ) const;
	int			getGradeExec( void ) const;
	
	void		beSigned( Bureaucrat & bu );

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
	bool				_signedStatus;
	const int			_gradeSign;
	const int			_gradeExec;

	Form( void );
};

std::ostream &	operator<<( std::ostream & o, Form const & rhs );

#endif
