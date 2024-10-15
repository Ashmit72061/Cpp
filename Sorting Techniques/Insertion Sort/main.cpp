#include <iostream>
using namespace std;

void printarr(int arr[],int size){
    cout<<"\narr = ";
    for(int i = 0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
}


int main() {

    int arr[] = {135,4,2,1,36,4,2,1,3,56,4,213,5,75,21,3,5642,146};
    int size = sizeof(arr)/sizeof(arr[0]);

    //sorting starts
    for(int i = 0; i <size; ++i){
        for(int j =i; j>0;--j){
            if(arr[j]<arr[j-1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else{
                break;
            }
        }
    }

    printarr(arr,size);

    return 0;
}