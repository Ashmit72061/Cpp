#include <iostream>
using namespace std;

int y =5;

// This does not work

/*int search(int arr[], int first, int last,int target){

    if(first>=last){
        return y;
    }

    int mid = (first + last)/2;

    //may be our answer
    if (arr[mid] >= target){
        y = mid;
        search(arr, first,mid-1,target);
    }
    else if (arr[mid] < target){
        search(arr, mid +1,last,target);
    }

    return -1;
}
*/

int main()
{

    int arr[] = {3, 5, 8, 15, 19}, target = 10;

    // cout<<"Index = "<< search(arr,0,4,9);

    int first = 0, last = 4;

    while (first <= last)
    {

        int mid = (first + last)/2;

        //might be the answer case 
        if (arr[mid] >= target)
        {
            y = mid;
            last = mid-1;

        }
        //can not be case
        else if (arr[mid] < target)
        {
            first = mid + 1;
        }
    }

    cout<<"Index = "<<y;

    return 0;
}