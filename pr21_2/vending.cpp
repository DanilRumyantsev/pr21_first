#include "vending.h"

VendingMachine::~VendingMachine() {}

VendingMachine::VendingMachine() {
    this->_slotCount = 0;
}

VendingMachine::VendingMachine(int slotCount) : _slotCount(slotCount) {
    slots = new SnackSlot * [slotCount];
    for (int i = 0; i < slotCount; ++i) {
        slots[i] = nullptr;
    }
    count();
}

void VendingMachine::count() {
    _emptySlotsCount = _slotCount;
}

void VendingMachine::addSlot(SnackSlot* slot) {
    if (_emptySlotsCount > 0) {
        slots[_emptySlotsCount] = slot;
        _emptySlotsCount--;
    }
}

int VendingMachine::getSlotCount() { return _slotCount; }
int VendingMachine::getEmptySlotsCount() { return _emptySlotsCount; }

void VendingMachine::displayVendingMachine() {
    setlocale(LC_ALL, "");
    std::cout << "---------------" << std::endl;
    std::cout << "--VendingMachine--" << std::endl;
    std::cout << "SlotCount: " << getSlotCount() << std::endl;
    std::cout << "EmptySlotsCount: " << getEmptySlotsCount() << std::endl;
}