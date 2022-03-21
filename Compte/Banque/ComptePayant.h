#pragma once
#include "Compte.h"
namespace Banque {
    class ComptePayant :
        virtual public Compte
    {
    public:
        ComptePayant(Client* cl, Devise* s);
        bool retirerArgent(Devise* montant);
        void deposerArgent(Devise* montant);
    };
};
