#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

#include "SelectableRandom.h"

int main() {
	SelectableRandom r;
	cout << "-- 0����" << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;
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
	cout << endl << endl << "-- 2���� " << "9������ ���� Ȧ�� ���� 10�� --" << endl;
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