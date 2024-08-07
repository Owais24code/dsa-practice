#include<bits/stdc++.h>
using namespace std;

// class abc{
//     int x;
//         static int count;
//     public:
//         static void show1(){
//             cout<<count;
//         }    
//         void show2(){
//             cout<<x<<count;
//         }
// };
// int abc::count=10;

// int main(){
//     abc o1; 
//         abc::show1();
//         o1.show2();
//         o1.show1();
// }


// void change(int &a){
//     a=a+1;
// }

// int main(){
//     int m;
//     cout<<"Enter a name :";
//     cin>>m;
//     cout<<"value of m ="<<m <<endl;
//     change(m);
//     cout<<"After change = " <<m <<endl;
// }

// class abc{
//     int num;
//     public:
//         abc(){
//             num =0 ;
//             cout<<"Default Constructor"<<endl;
//         }
//         abc(int n){
//             cout <<"parameterized constructor"<<endl;
//             num = n;
//         }
// };

// int main(){
//     abc o1;
//     abc o2(50);
// }


// class Test {
//     public:
//         int a,b;
//         Test(){
//             a=100;
//             b=100;
//             cout << "Default "<<endl;
//         }
//         Test(int x, int y){
//             a=x;
//             b=y;
//             cout <<"parameterized "<<endl;
//         }
//         Test(Test&t1){
//             a=t1.a;
//             cout << "copy "<<endl;
//         }


// };

// int main(){
//     Test obj1;
//     Test obj2(200,200);
//     Test obj3 =obj2;

// cout << "Test 3" <<endl;

//     cout <<obj3.a <<endl;
//     cout << obj3.b <<endl;

//     Test obj4;
//     obj4 = obj2;

//     cout << " Test 4" <<endl;
//     cout <<obj4.a <<endl;
//     cout << obj4.b <<endl;
// }

// class Store{
//     int a,b;
//     public:
//     void get(){
//         cout<<"Enter no apple :" <<endl;
//         cin >> a;
//         cout << "Enter no of banana :" <<endl;
//         cin >>b;
//     }
//     void show(){
//         cout <<a <<endl;
//         cout <<b <<endl;
//     }
//     int operator +(Store&s2){
//         int res= a+s2.a + b +s2.b;
//         return res;
//     }
// };

// int main(){
//     Store s1,s2;
//     s1.get();
//     s2.get();
    

//     cout<< "data of store -1" <<endl;

//     s1.show();

//     cout << "data store 2 "<<endl;

//     s2.show();

//     cout << "total is"<<res << endl;


// }



class Distance{
    int feet , inches;
    public:
        void get(){
            cin>> feet >> inches;

        }
};