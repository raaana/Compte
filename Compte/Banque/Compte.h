#pragma once
#include <vector>
#include "Client.h"
#include "Mad.h"
#include "Operation.h"
namespace Banque {
	class Compte
	{
	protected:
		int numCompte;
		static int incr;
		Client* proprietaire;
		Devise* solde;
		vector<Operation> historique;
	public:
		Compte();
		Compte(Client* cl, Devise* s);
		virtual bool retirerArgent(Devise* montant);
		virtual void deposerArgent(Devise* montant);
		void consulterSolde() const;
		bool transfererArgent(Compte* c, Devise* montant);
		Devise calculInteret(double taux);
		bool checkSolde(Devise* montant) const;
		bool checkDevouvert(Devise* montant, Devise* decouvert) const;
		~Compte();
	};
};