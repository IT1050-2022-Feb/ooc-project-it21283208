#pragma once
#include <string>
using namespace std;

//dependancy between payment and employer

class Payment{
private:
	int paymentID;
	double Amount;
	string paymentMethod;

public:
	Payment();
	Payment(int pID, double pAmount, string pMethod);
	void displayPayment();
	void validatePayment();
	~Payment();
};

