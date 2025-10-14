#include<iostream>
using namespace std;
class bankaccount{
private:
    double balance;
public:
    bankaccount(double b)
    {
        balance=b;
    }
    friend void auditaccount(bankaccount acc);
};
void auditaccount(bankaccount acc)
{
    cout<<"auditing account.balance: "<<acc.balance<<endk=l
};