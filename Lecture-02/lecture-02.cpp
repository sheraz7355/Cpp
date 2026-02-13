#include<iostream>
using namespace std;
// to check if uppercase or not
bool isUpperCase(char a){
      if( a >= 65 && a <= 90){
        return true;
      }
      return false;
}

// to sum of odd numbers from 1 to n

int sumofOdds(int number){
       if(number == 1){
        return number;
       }
       int oddSum = 0;
       for(int i =1; i <= number;i+=2){
           oddSum += i;
       }
       return oddSum;
}

// to check if a number is prime or not

bool isPrime(int n){
  for(int i = 2; i * i <= n ; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}


int main(){
 

  int i,j;

  cout<<"Enter the number :";
  cin>>i;
  cout<<"The number  is prime : "<<isPrime(i)<<endl;

}