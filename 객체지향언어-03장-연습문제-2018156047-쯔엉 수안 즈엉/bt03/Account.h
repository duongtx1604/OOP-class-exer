#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	string name;
	int id;
	int balance;
public:
	Account(string n, int i, int bal);
	void deposit(int won);
	int withdraw(int won);
	int inquiry();
	string getOwner() {
		return name; 
	}

};

#endif