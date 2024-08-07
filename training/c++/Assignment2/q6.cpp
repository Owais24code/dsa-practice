#include<iostream>
using namespace  std;

class accountDetails{
    private:
        int accountNo;
        int balance;
        int withdrawalAmount; 

    public:
        void setAccountDetails();
        void checkWithdrawal();
        void transactions();
};

void accountDetails :: setAccountDetails(){
            cin >> accountNo >> balance >> withdrawalAmount ;
        }
void accountDetails:: checkWithdrawal(){  
            if(withdrawalAmount > balance){
                cout << "unsufficient balance ";
            }
        }
void accountDetails:: transactions(){
            cout <<"transaction amount = " << balance - withdrawalAmount<<endl;
        }

int main(){
    accountDetails p1;
    p1.setAccountDetails();
    p1.checkWithdrawal();
    p1.transactions();
}


/*lambda function 

#include<bits/stdc++.h>

using namespace std;

void printVector(vector<int>&v){
    for_each(v.begin(),v.end(),
            [](int i)
            {
                cout << i << "";
            });
            cout << endl;
}

auto printVec =[](vector<int>arr){
    for(int n:arr){
        cout <<n<< " ";
    }
    cout <<endl;
};

int main(){
    vector<int>v={4,6,2,1,5};
    printVector(v);
}

#include<bits/stdc++.h>

using namespace std;

auto printVec = [](vector<int> v){
    for(int h:v){
        cout << h <<" ";
    }
};



int main()
{
    // vector<int>v={3,5,6,2,7};
    // printVec(v);
    
    // sort(v.begin(),v.end(),[](const int&a, const int&b)->bool{
    //     return a  < b;
    // });
    // cout << endl;
    // printVec(v);
    // cout <<endl;
    
    // int count_5 = count_if(v.begin(),v.end(),
    //     [](int a){
    //              return (a >=5 );
    //             });
                
    //     cout << count_5 <<endl;
    //  int count_even = count_if(v.begin(),v.end(),
    //     [](int a){
    //              return (a %2==0 );
    //             });
                
    //     cout << count_even <<endl;
    // int count_odd = count_if(v.begin(),v.end(),
    //     [](int a){
    //              return (a %2!=0 );
    //             });
                
    //     cout << count_odd <<endl;
    
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    int f = accumulate(v.begin(),v.end(),0,
            [](int i , int j){
                return i+j;
            });
            
    cout << f << endl;
    
    auto square =[](int i){
        return i*i;
    };
    cout << square(4);
}
*/