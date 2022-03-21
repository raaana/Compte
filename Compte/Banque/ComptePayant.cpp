#include "ComptePayant.h"
Banque::ComptePayant::ComptePayant(Client* cl, Devise* s) : Compte(cl, s)
{
}

bool Banque::ComptePayant::retirerArgent(Devise* montant)
{
	Devise res = *montant + *montant * 0.05;
	return this->Compte::retirerArgent(&res);
}

void Banque::ComptePayant::deposerArgent(Devise* montant)
{
	Devise res = *montant * 0.05;
	this->Compte::retirerArgent(&res);
	this->Compte::deposerArgent(montant);
}