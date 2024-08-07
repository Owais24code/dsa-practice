#include <bits/stdc++.h>

using namespace std;

class personDetails{
    private:
        string name;
        int age;
        string city;
        int pincode;
    public:
        void input();
        void output();    
};

void personDetails :: input(){
            getline( cin , name);
            getline(cin , city);
            cin >> age ;
            cin >> pincode;
        }
void personDetails :: output(){
     cout << "name :"<<name <<" age :"<<age<< " city :"<<city<<" pincode :"<<pincode;
}
int main(){
   personDetails obj;
   obj.input();
   obj.output();
}