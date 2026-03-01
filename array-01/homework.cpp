#include<iostream>
using namespace std;


void interSection(int arr1[],int arr2[],int size1,int size2){
    bool isCommon;
    
    for(int i = 0; i < size1; i++){
        isCommon = false;
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                isCommon = true;
                break;
            }
        }
        if(isCommon){
            cout<<arr1[i]<<" ";
        }
    }
    
}






int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,3,1};
    // cout<<"Enter the target value : ";
    // cin>>t;
    // sumAndProduct(n,arr);
     int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    interSection(arr1,arr2,size1,size2);

    // uniqueValues(n,arr);

    

    cout<<endl;
}

// void swapMinMax(int n,int arr[]){
//     int min,max = 0;
//     cout<<"Previos array : ";
//      for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // print the array
//     for(int i = 1; i < n; i++){
//          if(arr[i] < arr[min]){
//             min = i;
//          }
//          if(arr[i] > arr[max]){
//             max = i;
//          }
//     }

//     // after finding min and max index swap them
//     int temp = arr[min];
//     arr[min] = arr[max];
//     arr[max] = temp;
    
//     cout<<"After Swapping the Min. Max : "<<endl;

//      for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }



// void uniqueValues(int n,int arr[]){
//     int i = 0;
//     int j = n-1;
//     int temp;

//     while( i < j){
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
//     // print the array
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// void uniqueValues(int n,int arr[]){
//     bool isUnique;
//     for(int i = 0; i < n-1; i++){
//         isUnique = true;
//         // now loop for each number to check
//         for(int j = 0; j < n-1; j++){
//             if(arr[i] == arr[j+1]){
//                 isUnique = false;
//                 break;
//             }
//         }
//         if(isUnique){
//             cout<<arr[i]<<" ";
//         }
//     }
//     cout<<arr[n-1];
   
// }