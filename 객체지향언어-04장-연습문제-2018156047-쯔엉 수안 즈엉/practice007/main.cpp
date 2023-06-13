#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle() { }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
}

int main() {
	int  radius;
	Circle* pArray = new Circle[3]; 
	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >>"; 
		cin >> radius; 
		pArray[i].setRadius(radius); 
	}
	int count = 0; 
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		if (p->getArea() >= 100)
			count++;
		p++;
	}
	cout << endl << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
	delete[] pArray; 
}