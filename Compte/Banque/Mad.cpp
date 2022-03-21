#include "Mad.h"

Banque::Mad::Mad(double val) : Devise(val)
{
	this->type = "Mad"
}

Banque::Mad::~Mad()
{
	cout << "destructeur de la classe mad" << endl;
}
