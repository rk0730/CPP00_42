#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";";
	std::cout << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = getNbAccounts();
	_nbAccounts++;
	std::cout << "index:" << _accountIndex << ";";
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}
Account::~Account(void){
	
}

void Account::makeDeposit(int deposit)
{
	
}

bool Account::makeWithdrawal(int withdrawal)
{
	
}

int Account::checkAmount(void) const
{
	
}

void Account::displayStatus(void) const
{
	
}

void Account::_displayTimestamp(void)
{

}

Account::Account(){
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
}