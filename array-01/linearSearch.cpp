#include<iostream>
using namespace std;

int linearSearch(int n,int t,int arr[]){
    int target = t;

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
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
    cout<<"Enter the target value : ";
    cin>>t;

    cout<<linearSearch(n,t,arr);

    cout<<endl;
}