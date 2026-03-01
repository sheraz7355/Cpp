#include<iostream>
using namespace std;

int smallest(int n,int arr[]){
    int ans = arr[0];
    for(int i = 1; i < n; i++ ){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    return ans;
}

int largest(int n,int arr[]){
    int ans = arr[0];
    for(int i = 1; i < n; i++ ){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}



int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<largest(n,arr);

    cout<<endl;

   
}