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
using namespace std;
class bankaccount 
{
private:
	double balance;
	string name;
	string account;
public:
	bankaccount(string name);
	void display(double balance) {
		cout << balance << endl;
	}
	void deposit(double addbalance) {
		addbalance += balance;
	}
	void withdrow(double subtractbalance) {
		subtractbalance -= balance;	
};
void main()
{
	bankaccount x("name");
}