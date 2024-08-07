#include <iostream>

using namespace std;

class studentDetails{
    private:
        int id;
        string name;
        int sem;
        string branch;
    public:
        void input(){
            cin >> id >> name  >> sem >> branch ;
        }
        void output(){
            cout << "name :"<<name <<" id :"<<id << " sem :"<<sem <<" branch :"<<branch;
        }    
};
int main(){
   studentDetails obj;
   obj.input();
   obj.output();
}