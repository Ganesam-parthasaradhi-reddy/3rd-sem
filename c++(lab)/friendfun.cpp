#include<bits/stdc++.h>
using namespace std;
class BankAccount{
	private:
		double balance;
	public:
		BankAccount(double b) : balance(b){

        }
		
		
		friend void auditAccount(BankAccount A);
};

void auditAccount(BankAccount A){
	cout << A.balance << endl;
}

int main(){
	BankAccount B1(1000);
	auditAccount(B1);
}