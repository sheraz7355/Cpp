#include<iostream>
using namespace std;

int deciToBinary(int n){
    // first make logic
    // we gonna divide the n by 2 and store the remainder
    int ans = 0; // default ans = 0;
    // we gonna loop around n until its 0
    int remainder; // to store the remainder
    int pow = 1;
    while(n > 0){
        remainder = n%2; // gives us the remaindere like 33 = 16-1
        ans += remainder*pow; // we add reminder
        pow *= 10;
        n = n/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<deciToBinary(n)<<endl;
}