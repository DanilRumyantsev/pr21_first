#include "snacks.h"

Snack::~Snack() {}

Snack::Snack() {
    this->_snack = " ";
    this->_price = 0;
}

Snack::Snack(std::string snack, int price) : _snack(snack), _price(price) {}
//Snack::Snack(std::string snack) : _snack(snack) {}
Snack::Snack(std::string snack) : Snack(_snack, 0) {}

Snack Snack::operator++() {
    ++_price;
    return *this;
}

Snack Snack::operator--() {
    if (_price > 0)
    {
        --_price;
        return *this;
    }
    else std::cout << "Price is lower than 0!" << std::endl;
}

std::string Snack::getSnack() { return _snack; }

int Snack::getPrice() { return _price; }

void Snack::setPrice(int price) { this->_price = price; }

void Snack::displaySnack() {
    setlocale(LC_ALL, "");
    std::cout << "---------------" << std::endl;
    std::cout << "--Snack--" << std::endl;
    std::cout << "Name: " << getSnack() << std::endl;
    std::cout << "Price: " << getPrice() << std::endl;
}