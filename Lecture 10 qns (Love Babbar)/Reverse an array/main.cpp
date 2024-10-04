#include<iostream>
using namespace std;

// void printarr(int arr[55]){
//     int no_of_terms = sizeof(arr)/sizeof(arr[0]);

    // for(int i =0; i <no_of_terms-1; ++i){
    //     cout<<arr[i]<<" ";
    // }
// }

int main(){

    // int arr[] = {1,3,6,1,8,4,9,55,9,10};
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int no_of_terms = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    for(int i = 0; i < no_of_terms>>1; ++i){
        temp = arr[i];
        arr[i] = arr[no_of_terms-i-1];
        arr[no_of_terms-i-1] = temp;
    }
    for(int i =0; i <no_of_terms; ++i){
        cout<<arr[i]<<" ";
    }
    
}