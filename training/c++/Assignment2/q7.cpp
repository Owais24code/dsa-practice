#include <bits/stdc++.h>

using namespace std;

class studentDetails{
    private:
        int student_id;
        string name;
        string branch;
        int sub1_mark,sub2_mark,sub3_mark,sub4_mark,sub5_mark;
        int total, Percentage;
    public:
        void input();
        void output();
        void percent();
        void grade();
};

void studentDetails :: input(){
            getline(cin,name);
            cin >> student_id  >> branch ;
            cin >> sub1_mark >>sub2_mark>>sub3_mark >>sub4_mark >> sub5_mark;
        }
void studentDetails :: output(){
            cout << "student_id " << student_id << endl;
            cout << "Name : " << name << "  branch :" <<branch << endl;
        } 
void studentDetails :: percent(){
            total = sub1_mark+sub2_mark+sub3_mark+sub4_mark+sub5_mark;
            Percentage = (total/5);
            cout << "Percentage : " << Percentage<< endl;
}
void studentDetails :: grade(){
        if(Percentage >= 75 ){
            cout << "A";
        }
        else if(Percentage < 75 && Percentage >= 65 ){
            cout << "B";
        }
        else if(Percentage < 65 && Percentage >= 45 ){
            cout << "C";
        }
        else{
            cout << "D";
        }
}
int main(){
   studentDetails obj;
   obj.input();
   obj.output();
   obj.percent();
   obj.grade();
}