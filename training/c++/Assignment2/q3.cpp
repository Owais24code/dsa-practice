#include <iostream>

using namespace std;

class calculation{
    private:
        int num1;
        int num2;
    public:
        void getNum(){
           cin >> num1 >> num2;
        }
        int addition(){
            cout <<"addition of two  :" << num1 +num2 <<endl;
        }    
        int substract(){
            cout <<"substraction of two  :" << num1 - num2 <<endl;
        } 
        int multiply(){
            cout <<"multiply of two  :" << num1 * num2 <<endl;
        }    
        int division(){
            cout <<"division of two : " << num1 / num2;
        }    
};
int main(){
    calculation c1;
    c1.getNum();
    c1.addition();
    c1.substract();
    c1.multiply();
    c1.division();
}