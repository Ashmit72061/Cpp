#include <iostream>
using namespace std;

// int Binarysearch(int arr[],int first, int last, int target){
//     int mid = (first + last)/2;
// }

void printarr(int arr[], int size)
{
    for (int i = 0; i <= size; ++i)
    {
        printf(" %d", arr[i]);
    }
}

int countstudents(int arr[],int size, int max){
    int student = 1;
    int sum = 0;

    for (int i = 0; i < size; ++i){
        if (sum + arr[i]<=max){
            sum = sum + arr[i];
        }
        else{
            ++student;
            sum = arr[i];
        }
    }
    return student;
}

int main()
{

    int arr[] = {25, 54, 16, 28, 66, 80, 20};
    // int arr[] = {25, 46, 28, 49, 24};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int m = 5, n = 7;

    //sum
    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum+=arr[i];
    }

    // Binary Search 80 to sum..
    int first = 80, last = sum, mid;
    while (first <= last)
    {
        mid = first + (last - first) / 2;
        int student = countstudents(arr,n,mid);

        if(student>m){
            first = mid +1;
        }
        else{
            last = mid -1;
        }
        
    }
    cout<<sum<<endl;
    cout<<first;
    

    return 0;
}