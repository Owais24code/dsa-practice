#include<bits/stdc++.h>
using namespace std;

class employeeDetails{
    private:
        int empCode,basicSalary,DA,HRA,netSalary;
        int TA=500, incomeTax =0;
    public:
        void EmployeeSalary();
};

void employeeDetails::EmployeeSalary(){
    cout << " enter your empId and basicSalary "<<endl;
    cin >> empCode >> basicSalary ;
    cout << "empId : "<<empCode <<endl;
    cout << "Basic Salary :" << basicSalary << endl;
    DA = basicSalary * 174 /100;
    HRA =basicSalary* 10/100;
    if (basicSalary > 50000){
        incomeTax = basicSalary*5/100;
    }
    netSalary= (basicSalary +DA +HRA+TA)-incomeTax;

    cout << "Net Salary = "<< netSalary;
}

int main(){
    employeeDetails e1;
    e1.EmployeeSalary();

}