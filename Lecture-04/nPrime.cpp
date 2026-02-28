#include<iostream>
using namespace std;


void printPrime(int n){
    bool isPrime = true;

    for(int i = 2;  i <= n ; i++){
        isPrime = true;
        // first loop giving us numbers
        for(int j = 2; j*j <= i; j++){
            if(i%j == 0 ){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The prime numbers are : ";
    printPrime(n);
    cout<<endl;
}