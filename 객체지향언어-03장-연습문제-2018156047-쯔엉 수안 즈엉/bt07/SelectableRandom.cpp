
#include <cstdlib>
#include <ctime>

#include "SelectableRandom.h"

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}
int SelectableRandom::next() {
	return rand();
}
int SelectableRandom::nextInRange(int i, int y) {
	return i + rand() % (y + 1 - i);
}