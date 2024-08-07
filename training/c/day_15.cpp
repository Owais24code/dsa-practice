#include<bits/stdc++.h>
#include<bitset>

using namespace std;


// int main(){
//     int x =172;
//     int y = x & -x;

//     cout <<"a = " <<bitset<16>(x)<<endl;
//     cout <<"b = " << bitset<16>(-x)<<endl;
//     cout <<"c = " <<bitset<16>(y); 
// }


// #brain kernighan's algorithm


// int countSetBits(int x){
//     int count =0;
//     while(x){
//         x=x&(x-1);
//         count++;
//     }
//     return count;
// }

// int main(){
//     int x=5;
//     int ans =countSetBits(x);
//     cout<< "ans is "<<ans;
// }




/*set the kth bit*/


// int setKthBits(int x,int k){
//     if(x==0)return 0;
//     return x& ~(1<<(k-1)); // x&~(1>>(k-1)) unset the set bit
// }

// int unSetKthBits(int x,int k){
//     if(x==0)return 0;
//     return x | (1 <<(k-1));
// }

// bool isKthBitSet(int x, int k)
// {
//     return (x& ~(1<<(k-1)))!=0;
// }

// int toggleKthBits(int x, int k){
//     return x^(1<<(k-1));
// }
// int main(){
//     int x=7;
//     int k;
//     cin >> k;
//     cout<<"X ="<<bitset<16>(x) <<endl;
//     int res=setKthBits(x,k);
//     cout<< "res = "<<bitset<16>(res) <<endl;

//     int resUnSet =unSetKthBits(x,k);
//     cout << "resUnSet = "<<bitset<16>(resUnSet) <<endl;

//     int check = isKthBitSet(x,k);
//     cout << check<<endl;

//     int r1= toggleKthBits(x,k);
//     cout << bitset<16>(r1);
// }



/*day _16*/

// int preserveIthBit(int x, int i){
//     return x& ((1<<i)-1);
// }

// int main(){
//     int  x , i;
//     cin >> x >> i;

//     cout << "X =" <<bitset<16>(x) <<endl;
//     int res=preserveIthBit(x,i);
//     cout << "Res = "<<bitset<16>(res);
// }


class Student{
    int roll;
    string name;
    public:
        void input();
        void output();
};
int main(){
    Student s1;
    Student s2;


    Student *s3 = new Student();
    cout << "Fill the data of s1" <<endl;
    s1.input(); 
    cout << "Fill the data of s2" <<endl;
    s2.input(); 
    cout << "Fill the data of s3" <<endl;
    s3->input(); 

    cout <<"\nAll data is saved."<<endl;
    s1.output();
    s2.output();
    s3->output();
}

void Student::input(){
    cout <<"enter a roll no:";
    cin >> roll;
    cout <<"enter name :";
    cin >> name;
}

inline void Student::output(){
    cout<<"ROLL :"<<roll <<endl;
    cout<<"NAME :"<<name <<endl;
}