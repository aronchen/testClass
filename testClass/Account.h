#include <vector>
#include <string>
#include "Transaction.h"

class Account
{
private:
	int balance;
	int limit;
	std::vector<Transaction> log;
public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
	int GetBalance() { return balance; }
};