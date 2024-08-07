#include <iostream>

using namespace std;

class calculation{
    private:
        int num1;
        int num2;
    public:
        calculation(int n1 , int n2){
            num1 =n1;
            num2= n2;
        }
        void addition();
        void substract();
        void multiply();   
        int division();  
};

void calculation :: addition(){
    cout <<"addition of two  :" << num1 +num2 <<endl;
}
void calculation :: substract(){
    cout <<"substraction of two  :" << num1 - num2 <<endl;
} 
void calculation :: multiply(){
    cout <<" multiply of two  :" << num1 * num2 <<endl;
}
int calculation :: division(){
    cout <<" division of two : " << num1 / num2;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    calculation oper(n1,n2);
    oper.addition();
    oper.substract();
    oper.division();
    oper.multiply();

}