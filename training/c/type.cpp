#include <iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

// template <typename T>
// T myMax(T x, T y){
//     return (x >y)?x:y;
// }

// int main(){
//     cout <<myMax<int>(3,7) <<endl;

//     cout<<myMax<double>(3.0,7.0) <<endl;

//     cout<<myMax<char>('g','e') <<endl;

//     return 0;
// }

// template <typename T>

// class Array
// {
// private:
//     T*ptr;
//     int size;
// public:
//     Array(T arr[],int s);
//     void print();
// };
// template <typename T>

// Array<T>::Array(T arr[], int s){
//     ptr =new T[s];
//     size s;
//     for(int i=0;i<size;i++){
//         ptr[i] =arr[i];
//     }
// }

// template <typename T>
// void Array<T>::print(){
//     for(int i=0;i<size;i++){
//         cout<<" " <<*(ptr+i);
//     }
//     cout << endl;
// }

// template<typename T , typename U = char>
// class A{
//     T x;  U y;
//     public:
//     A(){
//         cout <<"Constructor called "<<endl;
//         cout <<"size of x :"<<sizeof(x) <<endl;
//         cout <<"size of y :"<<sizeof(y) <<endl;
//     }
// };

// int main(){
//     A<char> obj1;
//     A<double> obj2;
//     A<float ,double>obj3;
//     return 0;
// }

// template <class T,int max>
// int arrMin(T arr[], int n){
//     int m = max;
//     for(int i=0;i<n;i++){
//         if(arr[i]<m){
//             m= arr[i];
//         }
//     }
//     return m;
// }


// int main(){
//     int arr1[]={10,20,15,12};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
    
//     int arr2[]={'1','2','3'};
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);


//     cout << arrMin<int , 100000>(arr1,n1)<<endl;
//     cout << arrMin<char ,256>(arr2,n2)<<endl;
// }

// template<typename T > class Box
// {
//     public:
//     Box(T a){
//         cout << "a ="<<a<<endl;
//         cout <<sizeof(a) <<endl;
//     }
// };

// int main(){
//     Box<char> obj1('x');
//     Box<int> obj2(1);
//     Box<float> obj3(2.24);


// class Parent {
//     public:
//         virtual void show()=0;

// };

// class childA : public Parent{
//     public:
//     void show(){
//         cout << "Fortuner : show() of ChildA\n" ;
//     }
// };
// class childB : public Parent{
//     public:
//     void show(){
//         cout << "tuktuk : show() of ChildB\n" ;
//     }
// };

// int main(){
//     int choice;
//     cout << "1-childA \n 2-childB \n";
//     cout <<"Enter a choice :";
//     cin >> choice;
//     Parent *p;
//     if(choice == 1){
//         p = new childA();
//     }
//     else{
//         p = new childB();
//     }
//     p->show();
// }



// int main(){
//     vector<int>arr={1,2,3,4,5};

//     // for(int i=0;i<10;i++){
//     //     cout << arr.at(i);
//     // }

//     for(auto it =arr.begin();it!=arr.end()/2;it++){
//         cout <<*it <<endl;
//     }
//     // cout << arr.front() <<endl;
//     // cout <<arr.back();
    
//     // cout << arr.max_size()<<endl;
//     // cout << arr.size()<<endl;
//     // vector<int>arr2;
//     // swap(arr2,arr);
//     // cout << arr2.at(3) <<endl;
//     // arr.empty() ? cout <<"array is empty \n": cout <<"array is not empty\n";

//     int n;
//     cin >> n;
//     for(int i=0;i<=n;i++){
//         arr.push_back(i);
//     }

//     for(int i=6;i<=n;i++){
//         cout << arr[i]<<endl;
//     }

// }

// int main(){
//     vector<int>arr;
//     int n=arr.size();
//     cin >> n;
//     for(int i=0;i<=n;i++){
//         arr.push_back(i);
//     }
//     for(int i=(n/2)+1;i<=n;i++){
//            cout << arr[i] <<endl;
//     }
// }

// int main(){
//     vector<int>arr;
//     int n=arr.size();
//     cin >> n;
//     // int sum_even= 0;
//     for(int i=0;i<=n;i++){
//         arr.push_back(i);
//     }
//     // for(int i=0;i<n;i++){
//     //     if(arr[i]%2!=0){
//     //         cout<<arr[i] << " " <<arr[i]*arr[i] <<endl;
//     //     }
//     // }

//     for(int  i = n-1; i>=n/2 ;i--){
//         cout <<arr[i] <<endl;
//     }

// int main(){
//     // vector<int>v1;
//     // int n=v1.size();
//     // cin >> n;
//     // for(int i=0;i<n;i++){
//     //     int data;
//     //     cin>>data;
//     //     v1.push_back(data);
//     // }
//     // v1.erase(v1.end()-1);
//     // for(int i=0;i<n;i++){
//     //     cout <<v1[i] <<endl;
//     // }
//     // v1.clear();
//     // cout << v1.size();
//     vector<int>v1= {9,6,7,8};
//     vector<int>v2 = {1 ,2, 3, 4};

//     v1.swap(v2);
//     cout << v1.at(2) <<" "<< v2.at(1);
// }

int main(){
    int arr[5]={1,2,3,4,5};
    vector<int> v(arr,arr+8);
    sort(v.begin(),v.end());
}