#include<iostream>
using namespace std;


int sumofDigits(int n){

       int remainder;
       int ans = 0;
       while(n > 0){
        remainder = n%10;
        ans += remainder;
        n = n/10;
       }
       return ans;
}

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<sumofDigits(n)<<endl;
}