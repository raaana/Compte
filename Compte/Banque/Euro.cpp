#include "Euro.h"

Banque::Euro::Euro(double val) :Devise(val)
{
	this->type = "Euro";
}

Banque::Euro::~Euro()
{
	cout << "Destructeur de la classe Euro" << endl;

}
