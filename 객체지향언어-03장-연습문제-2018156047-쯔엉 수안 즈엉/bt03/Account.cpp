
#include <iostream>
#include <string>
using namespace std;

#include "Account.h"


Account::Account(string n, int i, int bal) {
	name = n;
	id = i;
	balance = bal;
}

void Account::deposit(int won) {
	balance += won;
}

int Account::withdraw(int won) {
	if (won > balance) { 
		won = balance;
		balance = 0;}
	else
		balance -= won; return won; 
}

int Account::inquiry() {
	return balance;
}
