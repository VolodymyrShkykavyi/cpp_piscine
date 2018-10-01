#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

void Account::_displayTimestamp() {
    // current date/time based on current system
    time_t  now = time(0);
    tm  *ltm = localtime(&now);

    std::cout << "["
        << 1900 + ltm->tm_year
        << std::setw(2) << std::setfill('0') << ltm->tm_mon
        << std::setw(2) << std::setfill('0') << ltm->tm_mday
        << "_"
        << std::setw(2) << std::setfill('0') << ltm->tm_hour
        << std::setw(2) << std::setfill('0') << ltm->tm_min
        << std::setw(2) << std::setfill('0') << ltm->tm_sec
        << "]";
}

Account::Account(int initial_deposit) {
    this->_nbWithdrawals = 0;
    this->_nbDeposits = 0;
    this->_amount = initial_deposit;
    this->_accountIndex = Account::getNbAccounts();
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;

    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account() {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts() {
    return Account::_nbAccounts;
}

int Account::getTotalAmount() {
    return Account::_totalAmount;
}

int Account::getNbDeposits() {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals() {
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    this->_nbDeposits++;

    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";p_amount:" << this->_amount - deposit
        << ";deposit:" << deposit
        << ";amount:" << this->_amount
        << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {

    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
        << ";p_amount:" << this->_amount << ";";

    if (withdrawal <= this->_amount) {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        Account::_totalAmount -= withdrawal;

        std::cout << "withdrawal:" << withdrawal
            << ";amount:" << this->_amount
            << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

        return true;
    }
    std::cout << "withdrawal:refused" << std::endl;
    return false;
}

int Account::checkAmount() const {
    return this->_amount;
}

void Account::displayStatus() const {
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;