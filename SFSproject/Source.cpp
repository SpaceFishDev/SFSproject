#include <iostream>
#include "sfs.hpp"
#include "math.hpp"
int main() {
	using namespace sfs;
	alunit unit;
	unit.Push(1);
	unit.Push(2);
	unit.Push(4);
	unit.Push(7);
	unit.BubbleSort(5);
}