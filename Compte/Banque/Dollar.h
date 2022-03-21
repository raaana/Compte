#pragma once
#include "Devise.h"
#include <iostream>

using namespace std;

namespace Banque {
    class Dollar :
        public Devise
    {
    private:
        string type;
    public:
        Dollar(double val);
        ~Dollar();
    };
};