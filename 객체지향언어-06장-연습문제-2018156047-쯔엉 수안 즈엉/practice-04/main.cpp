#include <iostream>
#include <string>

using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void test(); //test program
};
MyVector::MyVector(int n = 100, int val = 0) { //디폴트 매개 변수
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}
void MyVector::test() { //test program
	for (int i = 0; i < size; i++) {
		cout << mem[i] << ' ';
	}
	cout << '\n' << endl;
}

int main() {
	MyVector a(10); //test n=10, value = 0으로
	a.test();
	MyVector b(5, 69); //test n=5, value = 59으로
	b.test();

	return 0;
}