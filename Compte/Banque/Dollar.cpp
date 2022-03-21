#include "Dollar.h"

Banque::Dollar::Dollar(double val) :Devise(val)
{
	this->type = "Dollar";
}

Banque::Dollar::~Dollar()
{
	cout << "destructeur de la classe Dollar" << endl;
}
