#pragma once

#include <iostream>
#include <string>
#include <Windows.h>

class Counter {
public:
	Counter(int);
	int num1;
	void add();
	void subtract();
	void print();
};