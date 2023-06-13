#include <iostream>
using namespace std; 

#include "Ram.h"

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}
int Ram::write(int address, char value) {
	size = value; 
	return mem[address] = size;

}
int Ram::read(int address) {
	return mem[address] = mem[address];
}