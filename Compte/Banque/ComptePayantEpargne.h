#pragma once
#include "ComptePayant.h"
#include "CompteEpargne.h"
class ComptePayantEpargne :
    public CompteEpargne , public ComptePayant 
{
    namespace Banque {
        class ComptePayantEpargne :
            public ComptePayant, public CompteEpargne
        {
        public:
            ComptePayantEpargne(Client* cl, Devise* s, double taux);
            ~ComptePayantEpargne(); 
        };
    }
};

