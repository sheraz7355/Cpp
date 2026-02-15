#include<iostream>
using namespace std;

void trianglePattern(int n);
void triangleNumber(int n);
void triangleCharacter(int n);
void triangleNumbers(int n);
void reverseTriangle(int n);
void invertedTriangle(int n);

int main(){
     int i,j,k;
    cout<<"Enter the size of pattern :"<<endl;
    cin>>i;
    invertedTriangle(i);
}

// ReverseTriangle 
//1
//21
//321
  void reverseTriangle(int n){
    for(int i = 0; i < n; i++){
        
        for(int j = i+1; j > 0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
  }

  // Inverted trinagle
  // 1111
  //  222
  //   33
  //    4
  void invertedTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int k = n; k > i; k--){
            cout<<i+1;
        }
        cout<<endl;
    }
  }

// Triangle characters
// A
// B B
// C C C

void triangleCharacter(int n){
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

void triangleNumbers(int n){
    
    for(int i = 0; i < n; i++){
        int num = 1;
        for(int j = 0; j <= i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}


// Triangle numbers
// 1
// 2 2
// 3 3 3
void triangleNumber(int n){
        int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<num<<" ";
        }
        num++;
        cout<<endl;
    }
}

// Triangle pattern
// *
// **
// ***
void trianglePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}