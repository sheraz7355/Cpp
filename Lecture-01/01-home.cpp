#include<iostream>
using namespace std;

class HomeWork{
    public :
    // claculate simple interset 
    float simpleinterset(float p,float r,float t){
        return (p*r*t)/100;
    }
    // max number 
    float maxNumber(float a , float b){
        if(a > b){
            return a;
        }else{
            return b;
        }
    }
    // calculate the factporial of the number

    int factorial(int n){
        int fact = 1;
        int number = n;
        for(int i = 0; i < n; i++){
            fact *= number;
            number--;
        }
        return fact;
    }

    bool isLicense(int age){
        if(age >= 18 && age <= 60){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    HomeWork hw;
    int i,j,k;

    cout<<"Enter the age : "<<endl;
    cin>>i;
    cout<<"The person should get lisecence  "<<hw.isLicense(i)<<endl;


}