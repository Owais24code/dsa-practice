#include <bits/stdc++.h>
using namespace std;

class mobile{
    private:
        string brand , color;
        int price , width, height;
    public:
        mobile(string brand , string color , int p, int w, int h){
            this->brand=brand;
            this->color=color;
            price = p;
            width =w;
            height = h;
        }
        void displayMobile();
};
void mobile ::displayMobile(){
    cout <<" Brand :" <<brand <<endl;
    cout <<" price :" <<price <<endl;
    cout <<" color :" <<color <<endl;
    cout <<" width :" <<width <<endl;
    cout <<" height :" <<height <<endl;
}

int main(){
    string brand , color;
    int price , width, height;
    cin >> brand >> price >> color >> width >> height;
    mobile m1();
}