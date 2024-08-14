#include<iostream>
using namespace  std;

class atm{
    private:
        int accountNo;
        int balance;

    public:
        atm(int accNo , int balance){
            accountNo = accNo;
            this->balance=balance;
        }
        void deposit();
        void withdrawal();
        void Balance();
};

void atm :: deposit(){
            int depositAmount;
            cin >> depositAmount;
            cout << depositAmount <<endl;
            cout << "current balance :" << balance + depositAmount <<endl;
        }
void atm :: withdrawal(){  
            int withdrawalAmount; 
            cin >> withdrawalAmount;
            cout << "amount withdrawn :" << withdrawalAmount <<endl;
            cout << "current balance :" << balance - withdrawalAmount <<endl;
            
        }
void atm :: Balance(){
            cout << "balance amount :" <<balance;
        }

int main(){
    int accountNo ,balance;
    cin >> accountNo >> balance;
    atm t1(accountNo,balance);
    while(1){
        int choice;
        cin >> choice;
        switch(choice){
        case 1 :
            t1.deposit();
            break;
        case 2 :
            t1.withdrawal();
            break;
        case 3 :
            t1.Balance();
            break;
        case 4:
            cout << "Exit";
            break;
         }
    }
}