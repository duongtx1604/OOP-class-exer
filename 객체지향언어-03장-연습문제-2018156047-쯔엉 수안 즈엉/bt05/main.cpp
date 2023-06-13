#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

#include "Random.h"

int main() {
	Random r;
	cout << "-- 0에게" << RAND_MAX << "까지의 랜던 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4까지의 랜던 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}