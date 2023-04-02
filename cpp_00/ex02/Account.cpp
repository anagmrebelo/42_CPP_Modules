/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:02:27 by arebelo           #+#    #+#             */
/*   Updated: 2022/06/29 21:15:55 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <unistd.h>

//Constructor
Account::Account( int initial_deposit ) 
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created"
		<< std::endl;
	Account::_nbAccounts++;
	return ;
}

//Destructor
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed"
		<< std::endl;
	return ;
}


//Static member and functions
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";"
		<< "withdrawals:" << Account::getNbWithdrawals()
		<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t a = std::time(0);
    std::tm* now = std::localtime(&a);
    std::cout << "[" << (now->tm_year + 1900)
		<< (now->tm_mon + 1)
		<< now->tm_mday
		<< "_"
		<< now->tm_hour
		<< now->tm_min
		<< now->tm_sec
		<< "]";
}

//Non-static member and functions

void	Account::makeDeposit( int deposit )
{
	if (deposit > 0)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";"
			<< "deposit:" << deposit << ";"
			<< "amount:" << this->_amount + deposit << ";"
			<< "nb_deposits:" << this->_nbDeposits++ + 1
			<< std::endl;
		this->_amount += deposit;
		Account::_totalNbDeposits++;
		Account::_totalAmount += deposit;
	}
	return ;
}

bool	Account::makeWithdrawal( int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";";
	if (withdrawal <= this->_amount)
	{
		std::cout << "withdrawal:" << withdrawal << ";"
			<< "amount:" << this->_amount - withdrawal << ";"
			<< "nb_withdrawals:" << this->_nbWithdrawals++ + 1
			<< std::endl;
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return	(1);
	}
	std::cout << "withdrawal:refused" << std::endl;
	return (0);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

