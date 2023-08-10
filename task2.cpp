#include<bits/stdc++.h>
using namespace std;
// int reverseNumber(int n){
//     int number = 0;
//     while(n!=0){
//         int rem = n%10;
//         number = (number*10)+rem;
//         n = n/10;
//     }

//     return number;
// }

// now using recursion to solve this problem
int reverseNumber(int n, int number){
    if(n==0){
        return number;
    }

    int rem = n%10;
    number = (number*10)+rem;

    return reverseNumber(n/10, number);
    
}

int main(){

int n;
cin>>n;

int result = reverseNumber(n, 0);
cout<<result<<endl;


    return 0;
}