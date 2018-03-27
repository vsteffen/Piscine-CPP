/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:57:19 by vsteffen          #+#    #+#             */
/*   Updated: 2018/03/27 14:57:38 by vsteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.class.hpp"

Account::Account( int initial_deposit ) {
	Account::_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;

	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl; //<< " --> Creation" << std::endl;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
}

Account::Account(void) {
}

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}
bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
		std::cout << "withdrawal:" << "refused" << std::endl;
	else {
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return 0;
}

int		Account::checkAmount( void ) const {
	return 0;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}


int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void ) {
	std::time_t now = std::time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;

	if (ltm->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << ltm->tm_mon + 1;

	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday << "_";

	if (ltm->tm_hour < 10)
		std::cout << "0";
	std::cout << ltm->tm_hour;

	if (ltm->tm_min < 10)
		std::cout << "0";
	std::cout << ltm->tm_min;

	if (ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << ltm->tm_sec << "] ";

	return ;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
