#include "Devise.h"
#include <iostream>
#include <assert.h>
using namespace Banque;

Devise::Devise(double d)
{
	this->valeur = d;
}

bool Banque::Devise::operator>=(const Devise& d) const
{
	return this->valeur >= d.valeur;
}

bool Banque::Devise::operator>(const Devise& d) const
{
	return this->valeur >= d.valeur;
}

Devise Banque::Devise::operator-(const Devise& d)
{
	return this->valeur - d.valeur;
}

Devise Banque::Devise::operator+(const Devise& d)
{
	return this->valeur + d.valeur;
}

Devise Banque::Devise::operator*(double d)
{
	return this->valeur * d;
}

Devise Banque::Devise::operator/(double d)
{
	assert(d != 0);
	return this->valeur / d;
}

void Banque::Devise::afficher() const
{
	std::cout << this->valeur << std::endl;
}

Devise::~Devise()
{
	std::cout << "destructeur de la classe devise" << std::endl;

}