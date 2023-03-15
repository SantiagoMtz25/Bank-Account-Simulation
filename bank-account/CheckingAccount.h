#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"
#include <string>

using namespace std;

class CheckingAccount: public Account {
    private: 
        float comision = 1.5; 

    public: 
        CheckingAccount(string name = "Unnamed Checking Account", double balance =0.0, float comision = 1.5);
        float getComision();
        void retiro(double);
};

#endif