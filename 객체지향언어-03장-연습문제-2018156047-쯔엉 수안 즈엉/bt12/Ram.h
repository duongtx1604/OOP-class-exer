#pragma once
class Ram
{
	char mem[100 * 1024];
	int size;
public:
	~Ram();
	int read(int address);
	int write(int address, char value);
};

