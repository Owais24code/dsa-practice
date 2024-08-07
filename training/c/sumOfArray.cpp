#include <iostream>
#include <bitset>
using namespace std;


// int sum_of_array(int arr[], int size){
//     if(size==0){
//         return 0;
//     }
//     return arr[size-1]+sum_of_array(arr,size-1);
// }
// int main()
// {
//     int size;
//     cin>> size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>> arr[i] ;
//     }

//     int ans_sum=sum_of_array(arr, size);
//     cout<< ans_sum;
// }


/*fibonacci series*/

// int fibonacci(int n){
//     if(n==0)return 0;
//     else if(n==1)return 1;
//     else{
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int ans=fibonacci(n);
//     cout << ans <<endl;
// }


/* sum of digits using recursive*/

// int sumOfDigits(int n){
//     if(n >=0 && n <=9){
//         return n;
//     }
//     return (n%10)+sumOfDigits(n/10);
// }

// int main(){
//     int n;
//     cin >> n;
//     int ans = sumOfDigits(n);
//     cout << "sum of digits: " << ans;
// }



/*max element and min element*/

// int findMax(int arr[], int start , int end){
//     if(start == end)return arr[start];

//     int mid=(start+end)/2;
//     int max1=findMax(arr, start,mid);
//     int max2=findMax(arr,mid+1,end);

//     return (max1 > max2)?max1:max2;
// }

// int findMin(int arr[], int start , int end){
//     if(start == end)return arr[start];

//     int mid=(start+end)/2;
//     int min1=findMin(arr, start,mid);
//     int min2=findMin(arr,mid+1,end);

//     return (min1 < min2)?min1:min2;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     cout << "enter a number" <<endl;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int maxNumber=findMax(arr,0,n-1);
//     int minNumber=findMin(arr,0,n-1);

//     cout<<"maximum number is :" << maxNumber <<endl;
//     cout<<"minimum number is :"<<minNumber;
// }


/*reverse string using recursion*/

// void reverse_string(string &text, int start, int end){
//     if(start>=end)return;

//     swap(text[start],text[end]);

//     reverse_string(text,start+1,end-1);
// }

// int main(){
//     string text;
//     cin >> text;
//     reverse_string(text,0,text.length()-1);
//     cout << "reversed string :"<<text;
// }



/*powerset*/
// int power(int base, int exp){
//     if(exp==0)return 1;
//     if(exp==1)return base;

//     return base * power(base, exp-1);
// }


// int main(){
//     int b,e;
//     cout << "enter the base :";
//     cin>>b;
//     cout <<endl;
//     cout<< "enter the exponentail power :";
//     cin >> e;

//     int result = power(b,e);
//     cout << "exponentail result is :"<<result;
// }



// bool isPalindrome(string &text,int start,int end){
//     // if(start>= end)return true;

//     // if(text[start] != text[end])return false;

//     // return isPalindrome(text,start+1,end-1);



/*check for palindrome*/
// }
// int main(){
//     string text;
//     cin >> text;

//     bool palindrome=isPalindrome(text,0,text.length()-1);

//     if(palindrome){
//         cout<<"string is palindrome";
//     }
//     else{
//         cout<< "string is not palindrome.";
//     }
// }


/*calculate gcd*/

// int findGcd(int num1 ,int num2){
//     if(num1==0)return num2;
//     if(num2==0)return num1;
//     if(num1 > num2 && (num1 % num2==0)){
//         return num2;
//     }
//     return findGcd(num2,num1%num2);
// }

// int main(){
//     int num1,num2;
//     cin >> num1 >> num2;

//     int result =findGcd(num1,num2);
//     cout << "GCD of " <<num1 <<"and" <<num2 <<"is :"<<result;
// }




/*recursive function to count the number*/

// int countOccurences(int nums[], int size, int element){
//     if (size==0)return 0;

//     if(nums[size-1]==element){
//         return 1+ countOccurences(nums, size-1,element);
//     }
//     else{
//         return countOccurences(nums, size-1,element);
//     }
// }

// int main(){
//     int nums[]={3,4,5,7,3,9,5,3,5,9,4,3,5};
//     int size = sizeof(nums)/sizeof(nums[0]);
//     cout << "array elements:"<<endl;

//     for(int i=0;i<size;i++){
//         cout<<nums[i]<<' ';
//     }
//     int element;
//     cout<< "\nCount the occurrences of a specific element in the said array:";

//     cout <<"\nInput an element: ";
//     cin >> element;

//     int count = countOccurences(nums,size,element);

//     cout << "Number of occurrence" <<element <<":"<<count;

//     return 0;
// }


/*permutation of string*/
// void genratePermuation(string& text ,int start , int end){
//     if(start>= end){
//         cout <<text<<endl;
//         return;
//     }
//     for(int i=start;i<=end;i++){
//         swap(text[start],text[i]);
//         genratePermuation(text,start+1,end);
//         swap(text[start],text[i]);
//     }
// }

// int main(){
//     string text;
//     cin >> text;

//     cout<< "permuation of strings is :" <<endl;
//     genratePermuation(text,0,text.length()-1);
// // }


// int multiply(int x, int y){
//     if(x==0 || y==0)return 0;
//     return x+ multiply(x,y-1);
// }

// int main(){
//     int n1,n2;
//     cin >> n1 >> n2;

//     int res=multiply(n1,n2);
//     cout << "product of " << n1 << " and "<< n2 <<" is :"<<res; 
// }

int main(){
    // cout<< "6 = " <<bitset<8>(6);
    // cout<<endl;

    // cout<< "5 = "<<bitset<8>(5);
    // cout<<endl<<endl;

    // cout<< "11 = " <<bitset<16>(11);
    // cout<<endl;

    // cout<< "9 = "<<bitset<16>(9);
    // cout<<endl<<endl;

    // cout<< "34 = " <<bitset<8>(34);
    // cout<<endl;

    // cout<< "233 = "<<bitset<8>(233);
    // cout<<endl<<endl;

    // cout<< "173 = " <<bitset<16>(173);
    // cout<<endl;

    // cout<< "174 = "<<bitset<16>(174);
    // cout<<endl<<endl;
    int a =32;
    int b =a>>3;

    cout<<bitset<8>(a)<<endl;
    cout<<bitset<8>(b);

}

