#pragma once
#include "Devise.h"
#include <iostream>

using namespace std;

namespace Banque {
    class Euro :
        public Devise
    {
    private:
        string type;
    public:
        Euro(double val);
        ~Euro(); 
    };
};