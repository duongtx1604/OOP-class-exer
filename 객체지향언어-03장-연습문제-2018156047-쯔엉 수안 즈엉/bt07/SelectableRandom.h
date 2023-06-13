#ifndef SELECTABLERANDOM_H
#define SELECTABLERANDOM_H
class SelectableRandom
{
public:
	SelectableRandom();
	int next();
	int nextInRange(int i, int y);
};

#endif