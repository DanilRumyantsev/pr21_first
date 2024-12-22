#include "slots.h"

SnackSlot::~SnackSlot() {}

SnackSlot::SnackSlot() {
    this->_capacity = 0;
}

SnackSlot::SnackSlot(int capacity) : _capacity(capacity) {
    snacks = new Snack * [capacity];
    for (int i = 0; i < capacity; ++i) {
        snacks[i] = nullptr;
    }
    SnackCount();
}

void SnackSlot::SnackCount() {
    _unFilledCount = _capacity;
}

void SnackSlot::addSnack(Snack* snack) {
    if (_unFilledCount > 0) {
        snacks[_unFilledCount] = snack;
        _unFilledCount--;
    }
}

int SnackSlot::getCapacity() { return _capacity; }
int SnackSlot::getUnFilledCount() { return _unFilledCount; };

void SnackSlot::displaySnackSlot() {
    setlocale(LC_ALL, "");
    std::cout << "---------------" << std::endl;
    std::cout << "--SnackSlot--" << std::endl;
    std::cout << "Capacity: " << getCapacity() << std::endl;
    std::cout << "UnFilledCount: " << getUnFilledCount() << std::endl;
}