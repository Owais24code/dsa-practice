#include<iostream>
using namespace std;


// class Student{
//     private:
//         int marks;
//     public:
//         void input(){
//             cout << "Enter marks :";
//             cin >> marks;
//         }
//         void output(){
//             cout <<"Your marks :"<<marks;
//         }
//         friend void graceMarks(int m);
// };
// Student std1;

// void graceMarks(int m){
//     std1.marks = std1.marks +m;
// }
// int main(){
//     std1.input();
//     std1.output();
//     graceMarks(2);
//     std1.output();
// }


class parent{
    public:
        virtual void show(){
            cout <<"Also : show() of parent : \n";
        }
};

class childA :public parent{
    public:
       void show(){
        cout << "Fortune:show() of childA \n";
       }
};

int main(){
    parent *p1 =NULL;
    parent *p2 = NULL;
    childA *ch1 =NULL;

    p1 =new parent();
    p1->show();
    p2 = new childA();
    p2->show();

    ch1 = new childA();
    ch1 ->show();
}