#include<iostream>
using namespace std;


int factorial(int n){
    int ans = 1;
    while(n > 0){
        ans *= n;
        n--;
    }
    return ans;
}


int bionomialCofficent(int n,int r){

    int ans;
    // first calculate n
    int nFact = factorial(n);
    // then calculate r
    int rFact = factorial(r);
    // then calculate n-r
    int n_rFact = factorial(n-r);   
    ans = nFact/(rFact*n_rFact);
    return ans;
       
}



int main(){

    int n,r;
    cout<<"Enter the n : ";
    cin>>n;
    cout<<"Enter the r : ";
    cin>>r;
    cout<<bionomialCofficent(n,r)<<endl;
}