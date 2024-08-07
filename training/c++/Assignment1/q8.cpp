#include<iostream>

using namespace std;

int main(){
    int marks1, marks2, marks3,marks4,marks5,percentage,total=0 ;
    cin >> marks1 >> marks2 >>marks3 >> marks4 >>marks5;
    total = marks1+marks2+marks3+marks4+marks5;
    percentage = total / 5;
    cout << "total marks of 5 subject : " << total <<endl ;
    cout << "percentage is : "<<percentage<<"%";
}