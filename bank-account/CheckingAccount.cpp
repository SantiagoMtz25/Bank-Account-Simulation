#include "CheckingAccount.h"

using namespace std; 

CheckingAccount::CheckingAccount(string name, double balance, float comi)
    : Account{name, balance}, comision{comi}{
}

float CheckingAccount::getComision(){
    return comision;
}

void CheckingAccount::retiro(double amount, float comision){
    if (balance-amount >=0) {
        balance-=amount;
        balance-= comision;
        return true;
    } else
        return false;   
}