#include<iostream>
using namespace std;

int binaryToDeci(int n){
    // now we get binary to convert into numbers
    int pow = 1;
    int remainder;
    int ans = 0;
    while(n > 0){
       remainder = n%10;
       ans += remainder*pow;
       pow *= 2;
       n = n/10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<binaryToDeci(n)<<endl;
}