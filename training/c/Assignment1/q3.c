#include <stdio.h>

int main(){
    int emp_Id, hours, amount;
    scanf(" %d \n %d \n %d", &emp_Id, &hours, &amount);

    int salary = amount * hours;
    printf("Employee_Id :%d \n", emp_Id);
    printf("Salary = %2.f", salary);
    
}