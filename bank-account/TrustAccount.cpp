#include "TrustAccount.h"
#include "Account.h"
#include <string>

using namespace std; 

TrustAccount::TrustAccount(string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}{
}

int TrustAccount::getMax(){
    return retirosMax;
}

void TrustAccount::deposit(double balance, double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
    if (amount >= 5000)
        balance += 50;
    else {
        balance = balance;         
    }

}

void TrustAccount::retiroM5000(double balance, double amount){
    if (amount >= balance*0.2){
        if (balance-amount >=0) {
        balance-=amount;
        return true;
        balance+= 50;
    } 
    } else
        return false;  
}


