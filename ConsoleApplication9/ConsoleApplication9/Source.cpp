/*5. Define a class to represent a bank account. Data members should
include the
depositor’s name, the account number (use a string), and the balance.
Member functions
should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations.
(Programming*/

#include <iostream>
#include <string>
using namespace std;
class bankaccount 
{
private:
	int balance;
	string name;
public:
	void accountname(string name) {
	}
	void setbalance(int x) {
		balance=x;
	}
     int getbalance() {
		return balance;
	}
	void display(int balance) {
		cout << balance << endl;
	}
	void deposit(int addbalance) {
		addbalance += balance;
		cout << addbalance << endl;
	}
	void withdrow(int subtractbalance) {
		subtractbalance -= balance;
		cout << subtractbalance << endl;
	}
};
void main()
{
	bankaccount someone;
	someone.accountname("esm 7ad");
	someone.setbalance(1000);
    someone.display(1000);
	someone.deposit(50);
	someone.withdrow(20);
	system("pause");
}

