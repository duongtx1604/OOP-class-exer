#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

#include "SelectableRandom.h"

int main() {
	SelectableRandom r;
	cout << "-- 0에게" << RAND_MAX << "까지의 짝수 랜던 정수 10개--" << endl;
	int z{};
	int l{};
	do
	{
		int n = r.next();
		if (n % 2 == 0)
		{
			cout << n << ' ';
			z++;
		}
	} while (z < 10);
	cout << endl << endl << "-- 2에서 " << "9까지의 랜던 홀수 정수 10개 --" << endl;
	do
	{
		int n = r.nextInRange(2, 9);
		if (n % 2 != 0)
		{
			cout << n << ' ';
			l++;
		}
	} while (l < 10);
	
	cout << endl;}