1. A class is a definition of a user-defined type.A class declaration specifies how data is to be stored, 
 and it specifies the methods that can be used to access and manipulate that data.
 
2. Abstraction happens when a class represents the operations you can perform on a class object with a public interface of class
 methods.Encapsulation is that the details of the implementation such as data representation and method code are hidden.
 Data hiding means that the data can be accessed only through the member functions.
 
3. A class defines a type,including how it can be used.An object is a variable or another data object which is created and 
 used according to the class definition.The relationship between a class and an object is the same as that between a standard
 type and a variable of that type.

4. If you create several objects of a given class,each object comes with storage for its own set of data.But all the 
 objects use the one set of member functions.

5. Define a class to represent a bank account. 

 ```cpp
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
```

6.A class constructor is called to initialize an object of that class by two ways the first is to call
the constructor explicitly and the second way is to call the constructor implicitly. The destructor 
should clean up any debris, so it actually serves a useful purpose. For example, if your constructor 
uses new to allocate memory, the destructor should use delete to free that memory.A class destructor
is called when the object expires.

7.Provide code for a constructor for the bank account class from Chapter Review Question 5.
 ```cpp
BankAccount::BankAccount(string name,string num ,double b)
{
	balance =b;
	clientname = name;
	accountnumber=num;
}
```

8.A default constructor is a constructor that is used to create an object when you don’t provide explicit
initialization values.the default constructor has no arguments reflects the fact that no values appear
in the declaration. In default constructors the compiler provides one only if you don’t define any 
constructors.It also allows you to declare arrays. 

9.Modify the Stock class definition
 ```cpp
 #ifndef STOCK30_H_ 
#define STOCK30_H_
class Stock {
private:
	std::string company; 
	long shares;
	double share_val; 
	double total_val; 
	void set_tot() { total_val = shares * share_val; } 
public:
	Stock();            // default constructor
	Stock(const std::string & co, long n, double pr);
	~Stock() {}         // do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price); 
	void update(double price); 
	void show() const;
	const Stock & topval(const Stock & s) const; 

	int sharesnumbers() const
	{ return shares; } 
	double shareval() const
	{ return share_val; }
	double totalval() const
	{ return total_val; } 
	
};
#endif

 ```
 
10.The this pointer points to the object used to invoke a member function. (Basically, this is passed 
 as a hidden argument to the method).Thus,this is the address of the object,and *this represents the object itself.

