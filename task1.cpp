//WAP to find the sum of a given array using recursion

#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int arr[], int n){
    int sum = 0;
    if(n==1){
        return 1;
    }
    return arr[n-1] + sumOfArray(arr, n-1);
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int ans = sumOfArray(arr, n);
cout<<ans<<"\n";


    return 0;
}