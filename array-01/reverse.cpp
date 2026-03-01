#include<iostream>
using namespace std;

void reverse(int n,int arr[]){
    int i = 0;
    int j = n-1;
    int temp;

    while( i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    // print the array
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int n;
    int t;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // cout<<"Enter the target value : ";
    // cin>>t;

    reverse(n,arr);

    

    cout<<endl;
}