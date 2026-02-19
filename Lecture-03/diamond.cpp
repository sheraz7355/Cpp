#include<iostream>
using namespace std;

void diamond(int n);

int main(){
    int i;
    cout<<"Enter the size of pattern :"<<endl;
    cin>>i;
    ;
    diamond(i);
}
                        
// hollow diamond
//    *
//   * *
//  *   *
//   * *
//    *
void diamond(int n){
    // for the number of lines 
    int mid = n-1; // mid = 2;
    int k = 0;
    // 5 lines
    for(int i = 0; i < 2*n-1; i++){
        for( int j = 0; j < 2*n-1; j++ ){
              if( j == mid || j == (2*k)+mid){
                cout<<"*";
              }else{
                cout<<" ";
              }  
        }
            if( i < n-1){
                mid--;
                k++;
              }else{
                mid++;
                k--;
              }
        cout<<endl;
    }
}