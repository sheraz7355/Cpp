#include<iostream>
using namespace std;

void pyramid(int n);

int main(){
    int i;
    cout<<"Enter the size of pattern :"<<endl;
    cin>>i;
    pyramid(i);
}

void pyramid(int n){
    // first loop for number of lines
    for(int i = 0; i < n; i++){
        int num = 0;
        // now loop for the spaces print;
        for(int j = n; j > i+1; j--){
            cout <<" ";
        }
        for(int k = 0; k  < (2 * i) + 1; k++){
            if(k > i){
              num--;
            }else{
                num++;
            }
            cout<<num;
        }
        cout<<endl;
    }
}