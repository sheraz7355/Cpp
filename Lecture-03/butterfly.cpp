#include<iostream>
using namespace std;

void butterfly(int n);

int main(){
    int i;
    cout<<"Enter the size of pattern :"<<endl;
    cin>>i;
    ;
    butterfly(i);
}


// butterfly Pattern
// *      *
// **    **
// ***  ***
// ***  ***
// **    **
// *      *

void butterfly(int n){
     // n
     int k = 0;
    // loop for number of lines
    for(int i = 0; i < n; i++){
        // for space and star printing 
        for(int j = 0; j < n+2; j++){

            if( j <= k || j>=(n+1)-k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        if( i < n/2){ 
            // 2 < 3
            k++;
            if( i == n/2-1){
                k--;
            }
        }else{                                           
            k--;
        }
        cout<<endl;
    }

}