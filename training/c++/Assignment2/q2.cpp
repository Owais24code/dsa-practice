#include <iostream>

using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
    public:
        void setDimm(){
           cin >> length >> breadth;
        }
        void setArea(){
            cout <<"area of rectangle :" << length*breadth;
        }    
};
int main(){
    rectangle r1;
    r1.setDimm();
    r1.setArea();
}