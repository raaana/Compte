#include "ComptePayantEpargne.h"

Banque::ComptePayantEpargne::ComptePayantEpargne(Client* cl, Devise* s, double taux)
	: CompteEpargne(cl, s, taux), ComptePayant(cl, s)
{
}

ComptePayantEpargne::Banque::ComptePayantEpargne::~ComptePayantEpargne()
{
	cout << "Destrcuteur de la classe " << endl;
}
