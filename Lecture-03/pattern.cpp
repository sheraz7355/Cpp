#include<iostream>
using namespace std;



void square(int n);
void squareStars(int n);
void squarePattern(int n);
void squareNumbers(int n);

int main(){

    int i;
    cout<<"Enter the size of pattern :"<<endl;
    cin>>i;
    squareNumbers(i);

}
// Square pattern
// ****
// ****
// ****
// ****
void squareStars(int n){
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
// Square Pattern
// ABCD
// ABCD
// ABCD
// ABCD
void squarePattern(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = 0; j < n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
// Square pattern
// 123
// 456
// 789
void squareNumbers(int n){
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

// Square pattern
// 1234
// 1234
// 1234
void square(int n){
     for(int i = 0; i < n; i++){

        for(int j = 1; j <= n; j++){
            cout<<j;
        }
        cout<<endl;
     }
}