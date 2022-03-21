#include "Compte.h"
#include <iostream>
using namespace std;
using namespace Banque;

int Compte::incr = 0;
Compte::Compte() {
	this->incr++;
	this->numCompte = Compte::incr;
	this->proprietaire = 0;
	this->solde = 0;
	this->historique = vector<Operation>();
}

Compte::Compte(Client* prop, Devise* sol) {
	Compte::incr++;
	this->numCompte = Compte::incr;
	this->proprietaire = prop;
	this->solde = sol;
	this->historique = vector<Operation>();
}

bool Compte::retirerArgent(Devise* val) {
	if (*(this->solde) >= *val) {
		*(this->solde) = *this->solde - *val;
		Operation op("-", val);
		this->historique.push_back(op);
		return true;
	}
	return false;
}

void Compte::deposerArgent(Devise* val) {
	*(this->solde) = *(this->solde) + *val;
	Operation op("+", val);
	this->historique.push_back(op);
}

void Compte::consulterSolde() const {
	cout << "Compte num " << this->numCompte << endl;
	cout << "Proprietaire : " << this->proprietaire << "\n";
	cout << "Solde : ";
	this->solde->afficher();
}

bool Compte::transfererArgent(Compte* cpt, Devise* val) {
	if (this->retirerArgent(val)) {
		cpt->deposerArgent(val);
		return true;
	}
	return false;
}

Devise Banque::Compte::calculInteret(double taux)
{
	return *(this->solde) * (taux / 100);
}

bool Banque::Compte::checkSolde(Devise* montant) const
{
	return *(this->solde) / 2 >= *montant;
}

bool Banque::Compte::checkDevouvert(Devise* montant, Devise* decouvert) const
{
	return *(this->solde) - *montant > *decouvert;
}

Compte::~Compte() {
	std::cout << "Destructeur de la classe Compte.";
	Compte::incr--;
}