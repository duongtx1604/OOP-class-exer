#include <iostream>
using namespace std; 

#include "Ram.h"

Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}
int Ram::write(int address, char value) {
	size = value; 
	return mem[address] = size;

}
int Ram::read(int address) {
	return mem[address] = mem[address];
}