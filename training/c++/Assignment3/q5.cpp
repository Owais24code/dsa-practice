#include <bits/stdc++.h>
using namespace std;

class mobile{
        string brand , color;
        int price;
    public:
        void displayMobile();
        void countMobile();
};
void mobile :: countMobile(){
    int count=0;
    if(price >= 50000){
        count++;
    }
    cout <<" total number of phone above 50000 :" <<count << endl;
}
void mobile :: displayMobile(){
     cin >> brand >> color;
     cin >> price ;

    if(price >100 && price <=1000){
        cout << "Brand :" <<brand << " price :" <<price << " color : "<<color ;
    }

}

int main(){
    mobile m1[5];
    for(int i=0;i<=5 ;i++){
        m1[i].displayMobile();
    }
    m1->countMobile();
}