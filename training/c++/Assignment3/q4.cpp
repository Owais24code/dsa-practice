#include <bits/stdc++.h>
using namespace std;

class mobile{
        string brand , color;
        int price , width, height;
    public:
        mobile(string brand , string color , int price, int width, int height){
            this->brand=brand;
            this->color=color;
            this->price = price;
            this->width =width;
            this->height = height;
        }
        void displayMobile();
};
void mobile :: displayMobile(){
    cout <<" Brand :" <<brand <<endl;
    cout <<" price :" <<price <<endl;
    cout <<" color :" <<color <<endl;
    cout <<" width :" <<width <<endl;
    cout <<" height :" <<height <<endl;
}

int main(){
    mobile m1("apple","red",888,5,7);
    m1.displayMobile();
}