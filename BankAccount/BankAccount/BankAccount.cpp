
#include <iostream>
#include "BankAccount.h"
using namespace std;

void BankAccount::deposite(double amount)
{
	balance +=amount;
}

void BankAccount::withdraw(double amount)
{
	if(amount > balance)
	{
		cout<< "Error :The amount > balance ";
		
	}
	else{
		balance -= amount;
	}
}

BankAccount::BankAccount(string name)
{
	balance =1000;
	clientname = name;
}

BankAccount::BankAccount(string name,string num ,double b)
{
	balance =b;
	clientname = name;
	accountnumber=num;
}

