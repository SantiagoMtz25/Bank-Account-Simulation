#ifndef TRUSTACCOUNT_H
#define TRUSTACCOUNT_H
#include <string>

using namespace std; 
int const retirosMax = 3;

class TrustAccount: public Savings_Account { 
    private: 

    public: 
        TrustAccount(string name = "Unnamed Trust Account", double balance =0.0, double int_rate = 0.0);
        int getMax();
        void deposit();
        void retiroM5000(int);


}