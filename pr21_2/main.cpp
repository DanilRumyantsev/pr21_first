#include <iostream>
#include "snacks.h"
#include "slots.h"
#include "vending.h"
using namespace std;

int main() {
	Snack* bounty = new Snack("Bounty", 0);
	Snack* snickers = new Snack("Snickers", 0);
	bounty->displaySnack();
	snickers->displaySnack();
	SnackSlot* slot = new SnackSlot(10);
	VendingMachine* machine = new VendingMachine(30);

	slot->addSnack(bounty);
	slot->displaySnackSlot();
	machine->addSlot(slot);

	slot->addSnack(snickers);
	slot->displaySnackSlot();
	machine->addSlot(slot);

	cout << endl;
	cout << machine->getEmptySlotsCount() << endl;
	machine->displayVendingMachine();

	bounty->setPrice(25);
	snickers->setPrice(45);
	bounty->displaySnack();
	snickers->displaySnack();
	++*bounty;
	bounty->displaySnack();

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	return 0;
}