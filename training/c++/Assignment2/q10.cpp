#include<bits/stdc++.h>

using namespace std;

class timeCalculate{
    private:
        int hours, minu,seconds;
    public:
        void displayTime();
};

void timeCalculate :: displayTime(){
    cin >> hours >> minu >> seconds;
    int totalSecond = (hours * 3600 )+ (minu*60) +seconds;
    cout << "HOURS : "<<hours <<endl;
    cout << "minutes : "<<minu <<endl;
    cout << "seconds : "<<seconds <<endl;
    cout << "totalSecond : "<<totalSecond <<endl;
}
int main(){
    timeCalculate t1;
    t1.displayTime();
}