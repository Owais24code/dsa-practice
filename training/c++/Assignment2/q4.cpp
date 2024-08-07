#include <iostream>

using namespace std;

class rectangle{
    private:
        int radius;
    public:
        void setDimm(){
           cin >> radius;
        }
        void setArea(){
            cout <<"area of circle :" << 3.14*(radius*radius);
        }    
};
int main(){
    rectangle r1;
    r1.setDimm();
    r1.setArea();
}