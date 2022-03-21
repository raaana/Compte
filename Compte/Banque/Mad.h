#pragma once
#include "Devise.h"
#include<iostream>
using namespace std;

namespace Banque {
    class Mad :
        public Devise
    {
    private:
        string type;
    public:
        Mad(double val);
        ~Mad(); 
    };
};