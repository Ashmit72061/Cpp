#include <iostream>
using namespace std;

int main() {

    int arr[] = {2,3,5,8};

    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = size -1, mid = start + (end - start)/2;

    while(start<end){
        // if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
        //     break;
        // }
        if(arr[mid]>=arr[0]){
            start = mid +1;
        }
        else{
            end = mid;
        }

        mid = start + (end - start)/2;
    }

    cout<<start;

    return 0;
}