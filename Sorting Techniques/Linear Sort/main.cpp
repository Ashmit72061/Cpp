#include <iostream>
using namespace std;

void sort(int arr[], int size){
    // int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; ++i){
        for(int j = i; j>0; --j){
            if (arr[j]<arr[j-1]){
                //swap arr[j] and arr[j-1]
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else{
                break;
            }
        }
    }
}

void printarr(int arr[],int size){
    cout<<"\narr = ";
    for(int i = 0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[] = {13,5,3,1,3,6,7652,47,222,135,3,1,3,56};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr,size);

    printarr(arr,size);
    
    return 0;
}