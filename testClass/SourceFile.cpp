#include <iostream>
#include "Account.h"


using namespace std;


void ChangeParam(Transaction t)
{
//  Local Parameter
	t.DoubleAmount();
}

void ChangeReference(Transaction& t)
{
//  Reference (Alias) (Same Address)
	t.DoubleAmount();
}

void ChangeAddress(Transaction* t)
{
//  Pass address *t.  ==   t->
	t->DoubleAmount();
}

int main()
{
	Account a1;
	const int amount = 90;
	a1.Deposit(amount);
	cout << "After depositing $90, " << "The balance is " << a1.GetBalance() << endl;
	for (auto s : a1.Report())
	{
		cout << s << endl;

	}
	a1.Withdraw(50);
	if (a1.Withdraw(100))
	{
		cout << "Second withdraw succeeds" << endl;
					
	}
	cout << "After withdraw" << endl;
	for (auto s : a1.Report())
	{
		cout << s << endl;
			
	}

	cout << "Change Transaction" << endl;

	Transaction ttt(50, "Deposit");
	cout << "Original Transaction " << ttt.Report() << endl;
	ChangeParam(ttt);
	cout << "After Change Parameter " << ttt.Report() << endl;
	ChangeReference(ttt); 
	cout << "After Change Reference " << ttt.Report() << endl;
	ChangeAddress(&ttt); // Address need operator
	cout << "After Change Address " << ttt.Report() << endl;




	return 0;
}