#pragma once
#include "Vacancy.h"
//Unidirectional association between employer and vacancy
class Publishing
{
private:
	string publishedDate;
	Vacancy* vac1;

public:

	Publishing();
	Publishing(string pDate);
	void publishVacancy();
	~Publishing();
};
