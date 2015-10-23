
#ifndef Bank
#define Bank
#include <string>
using namespace std;
class BankAccount {
private:
	string clientname;
	string accountnumber;
	double balance;

public:
	BankAccount (string name);
	BankAccount ( string name , string num ,double balance);
	void display();
	void deposite(double amount);
	void withdraw(double amount);
};
#endif