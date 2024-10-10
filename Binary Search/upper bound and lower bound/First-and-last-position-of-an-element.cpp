#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 5, 7, 8, 8, 8, 10, 10, 10, 11, 14, 17, 17, 17, 17}, target = 17;
    //  Index:   0  1  2  3  4  5  6   7   8   9  10  11  12  13  14  15 

    // Finding Lower Bound
    int first = 0, last = sizeof(arr) / sizeof(arr[0])-1;
    while (first <= last)
    {
        int mid = (first + last) / 2;

        // maybe lower bound
        if (arr[mid] >= target)
        {
            last = mid - 1;
        }

        // never the answer
        if (arr[mid] < target)
        {
            first = mid + 1;
        }
    }

    //finding last position of an element using loop(Linear)
    /*
    int i = first;
    while(arr[i] == target){
        ++i;
    }
    */

    //finding last position of an element using binary search

    int low = 0, high = sizeof(arr) / sizeof(arr[0])-1;

    while(low<=high){
        int centre = (low+high)/2;

        //maybe upper bound
        if (arr[centre] == target){
            // low = centre+1;
            low = centre +1;
        }
        else if (arr[centre] > target){
            high = centre-1;
        }
        else if (arr[centre] < target){
            low = centre+1;
        }
    }
    

    // cout<<"first: "<<first<<"Last: "<<i-1;
    cout<<"first: "<<first<<" Last: "<<low-1;

    return 0;
}