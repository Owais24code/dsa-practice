#include <bits/stdc++.h>

using namespace std;

class area{
    private:
        int length,breadth;
    public:
        area(int len , int br){
            length = len;
            breadth = br;
        }
        void getArea();
};

void area :: getArea(){
     cout << "Area : " << length*breadth ;
}
int main(){
    int length , breadth;
    cin >> length >> breadth;
    area rectangle(length,breadth);
    rectangle.getArea();
}