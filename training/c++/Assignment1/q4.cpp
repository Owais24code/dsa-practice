#include<iostream>

using namespace std;

int main(){
    int temp1, temp2, temp3,temp4,temp5,avg,total=0 ;
    cin >> temp1 >> temp2 >>temp3 >> temp4 >>temp5;
    total = temp1+temp2+temp3+temp4+temp5;
    avg = total / 5;
    cout << "avg is : " <<avg;
}