#include "Publishing.h"
#include <iostream>


Publishing::Publishing() //Default constructor
{
	publishedDate = "";
}

Publishing::Publishing(string pDate) //Overloaded constructor
{
	publishedDate = pDate;
}

void Publishing::publishVacancy()
{

}

Publishing::~Publishing()   //Default destructor
{
	cout << "Publishing destroyed" << endl;

}