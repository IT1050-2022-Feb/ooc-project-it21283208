#include "Payment.h"
#include <iostream>

Payment::Payment() {
	//Default constructor
	paymentID = 000;
	Amount = 00000;
	paymentMethod = "";
}

Payment::Payment(int pID, double pAmount, string pMethod) {
	paymentID = pID; //Overloaded constructor
	Amount = pAmount;
	paymentMethod = pMethod;
}

void Payment::displayPayment() {

}

void Payment::validatePayment() {

}

Payment::~Payment() {
	//Default destructor
	cout << "Payment destroyed" << endl;
}

