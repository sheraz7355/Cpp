#include<iostream>
using namespace std;


void fibonacci(int n){
    int first = 0;
    int ans = 1;
    cout<<first<<" ";
    if( n >= 2){
        cout<<ans<<" ";
    }
    int temp = ans;
    ans += first;
    first = ans;

    int i = 2;

    while( i < n){

          cout<<ans<<" ";
          temp = ans;
          ans += first;
          first = temp;
          i++;
    }
    
}


int main(){
    int n;
    cout<<"Enter the number of times";
    cin>>n;
    cout<<"The fibonacci series is : ";
    fibonacci(n);
    cout<<endl;
}