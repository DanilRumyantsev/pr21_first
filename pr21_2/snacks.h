#pragma once
#include <iostream>
#include <string>

class Snack {
private:
	std::string _snack;
	int _price;
public:
	Snack();
	Snack(std::string snack, int price);
	Snack(std::string snack);
	~Snack();

	Snack operator++();
	Snack operator--();

	std::string getSnack();
	void setPrice(int price);
	int getPrice();

	void displaySnack();
};