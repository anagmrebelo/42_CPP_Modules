/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:19:50 by arebelo           #+#    #+#             */
/*   Updated: 2023/08/24 16:55:40 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
public:
	AForm( std::string name, int gradeSign, int gradeExec );
	AForm( AForm const & src );
	AForm( void );
	~AForm( void );

	AForm &	operator=( AForm const & rhs );

	std::string const &	getName( void ) const;
	bool				getSignedStatus( void ) const;
	int					getGradeSign( void ) const;
	int					getGradeExec( void ) const;
	
	void				beSigned( Bureaucrat & bu );
	virtual void		execute( Bureaucrat & executor ) const = 0;
	virtual AForm *		clone( void )const = 0;

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

	class	NotSignedException : public std::exception
	{
	public:
		virtual const char *	what() const throw();
	};

private:
	const std::string	_name;
	bool				_signedStatus;
	const int			_gradeSign;
	const int			_gradeExec;
};

std::ostream &	operator<<( std::ostream & o, AForm const & rhs );

#endif
