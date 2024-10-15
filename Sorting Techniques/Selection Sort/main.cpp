#include <iostream>
using namespace std;

int min(int arr[], int size,int first){
    int mini = 0;
    for(int i = first; i<size;++i){
        if(arr[i]<=arr[mini]){
            mini = i;
        }
    }
    return mini;
}

void printarr(int arr[],int size){
    cout<<"\narr = ";
    for(int i = 0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[] = {135,4,2,1,36,4,2,1,3,56,4,213,5,75,21,3,5642,146};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size; ++i){
        int lowi = min(arr,size,i);
        int temp = arr[i];
        arr[i] = arr[lowi];
        arr[lowi] = temp;
        
    }

    printarr(arr,size);

    return 0;
}