#pragma once
#include "snacks.h"
#include <iostream>

class SnackSlot {
private:
	int _capacity;
	int _unFilledCount;
	Snack** snacks;
public:
	SnackSlot();
	SnackSlot(int capacity);
	~SnackSlot();

	int getCapacity();
	int getUnFilledCount();

	void SnackCount();
	void addSnack(Snack* snack);
	void displaySnackSlot();
};