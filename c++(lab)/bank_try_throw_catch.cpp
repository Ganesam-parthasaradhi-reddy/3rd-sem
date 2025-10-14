#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    public:
    double balance;
    BankAccount(double bal)
    {
        balance = bal;
    }
    void withdraw(double amount)
    {
        try{
            if(amount > balance)
            {
                throw "Insufficient Balance";
            }
            balance -= amount;
            cout << "Withdrawal Successful. New Balance: " << balance << endl;
        }
       catch(const char* msg)
       {
            cout << msg << endl;
       }
    }
};
int main()
    {
        BankAccount b1(1000.0);
        b1.withdraw(1500.0);
        b1.withdraw(500.0);

    }
