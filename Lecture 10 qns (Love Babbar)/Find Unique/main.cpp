#include <iostream>
using namespace std;

void printarr(int arr[], int n){
    cout<<endl;
    for (int i = 0; i <n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,3,2,4,88,3,1,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0,j = i+1;
    while(i < n){
        if(arr[i]==arr[j] && i != j){
            // if(i==j){continue;}
            cout<<"Duplicate = "<<arr[i]<<endl;
            ++i;
            // j = i+1;
            j = 0;
        }
        else if(arr[i] != arr[j] && j == n-1){
            cout<<"Unique = "<<arr[i]<<endl;
            break;
        }
        else{++j;}
    }
}