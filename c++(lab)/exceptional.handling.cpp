#include <bits/stdc++.h>
using namespace std;
class Bank{
    double balance;
public:
    Bank(double bal){
        this->balance = bal;
    }
    void deposit(double money){
        balance += money;
        cout << money << " Rs Deposited in your bank account\nCurrent Balance : " << balance << endl;
    }
    void Withdraw(double money){
        try{
            if(money > balance) throw "Not Sufficent Balance to Withdraw";  
            cout << "Here is your money : " << money << endl << "Current balance : " << balance - money << endl;
            balance -= money; 
        }catch(const char* e){
            cout << "Error : " << e << "!!\n"; 
        }
    }
    double GetBalance(){
        return balance;
    }
};
int main(){
    Bank p1(100);
    p1.Withdraw(101); 
    p1.deposit(12); 
    p1.GetBalance();
    return 0;
}