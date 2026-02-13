#include<iostream>
#include<cmath>
using namespace std;


// area of rectangle
int areaOfRectangle(int i,int j){
    return i*j;
}

int areaOfSquare(int i){
    return i*i;
}
int areaOfCircle(int r){
    return 3.14*r*r;
}
int areaOfTriangle(int b,int h){
    return 0.5*b*h;
}
bool isEven(int n){
      if(n%2==0){
        return true;
      }
      else{
        return false;
      }
}
int minNumber(int i,int j){
    if(i < j){
        return i;
    }else{
        return j;
    }
}

// sum of numbers from 1 to n;
int sumOfNum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
       sum = sum +i;
    }
    return sum;
}
// sum of numbers by mathematics logic
int sumOfNumMath(int n){
    return (n*(n+1))/2;
}

bool isPrime(int n){
    for(int i =2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int i,j;

    cout<<"Enter the a number: ";
    cin>>i;
    cout<<"The sum of  number is : "<<sumOfNum(i)<<endl;
    cout<<"The sum of  number is (mathematical approach) : "<<sumOfNumMath(i)<<endl;
    return 0;
}