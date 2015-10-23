1- user defined or data structure made of private region which contains the information cannot be known to the user and public region which contains the desired info to be modified or edited (group similar functions).
2-by using private segment
3- object is how you access the stuff inside your class and in big computers programs you may have the same function name in many classes to the object tell you what class you are working with.
4-class data member are like variables and can be but in the private segment so as not to be changed later but functions members are used to access this data variables so they are in public segment
5-class bankaccount 
{
private:
	double balance;
	string name;
	string account;
public:
	bankaccount(string name);
	void deposit(double addbalance);
	void withdrow(double subtractbalance);
};
6-class constructor does not have a return and is printed automatically ,used to initialize variables
7-void main()
{
	bankaccount x("name");
}
8- default constructor is used to create object when you don't provide explicit initialization values
9-// stock30.h
#ifndef STOCK30_H_
#define STOCK30_H_
class Stock
{
private:
std::string company;
long shares;
double share_val;
double total_val;
void set_tot() { total_val = shares * share_val; }
public:
Stock(); // default constructor
Stock(const std::string & co, long n, double pr);
~Stock() {} // do-nothing destructor
void buy(long num, double price);
void sell(long num, double price);
void update(double price);
void show() const;
const Stock & topval(const Stock & s) const;
int numshares() const { return shares; }
double shareval() const { return share_val; }
double totalval() const { return total_val; }
const string & co_name() const { return company; }
};
10-this is key words that identifies a special tybe of pointers, stores the address of the current opject you are working with, *this is taking the memory location of the current opject adn calling the variable value right there (uses memory location)

