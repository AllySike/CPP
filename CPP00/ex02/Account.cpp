/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:47:12 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 13:47:12 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Account::Account()
//{
//
//}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << initial_deposit << ";";
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    this->_nbAccounts--;
    std::cout << "index:" << this->_accountIndex
                << ";amount:" << this->_amount
                << ";closed" << std::endl;
}

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
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _totalNbDeposits++;
    _nbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";p_amount:" << _amount
                << ";deposit:" << deposit
                << ";amount:" << _amount + deposit
                << ";nb_deposits:" << _nbDeposits
                << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += 1;
    std::cout << withdrawal
                << ";amount;" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals
                << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals
                << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    std::time_t time_now = std::chrono::system_clock::to_time_t(now);

    tm utc_tm = *localtime(&time_now);
    std::cout << "[" << std::setfill('0')
                << (utc_tm.tm_year + 1900)
                << std::setw(2) << utc_tm.tm_mon
                << std::setw(2) << utc_tm.tm_mday << "_"
                << std::setw(2) << utc_tm.tm_hour
                << std::setw(2) << utc_tm.tm_min
                << std::setw(2) << utc_tm.tm_sec << "] ";
}
