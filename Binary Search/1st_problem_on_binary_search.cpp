#include <iostream>
using namespace std;

int search(int x[], int first, int last, int target)
{
    int mid = (first + last)/2;

    if (first > last){
        return -1;
    }

    if (target == x[mid]){
        return mid;
    }
    else if(target > x[mid]){
        search(x, mid+1,last,target);
    }
    else if (target < x[mid])
    {
        search(x, first,mid-1,target);
    }
    // else if (mid == last -1){
    //     if 
    // }

    // if (mid == last || mid == first){
    //     return -1;
    // }
    
}

int main()
{

    // Let’s say the given array is = {3, 4, 6, 7, 9,y 12, 16, 17} and target = 6.

    int x[] = {3, 4, 6, 7, 9, 12, 16, 17};

    int size = sizeof(x) / sizeof(x[0]);

    int y = search (x,0,size-1,18);

    cout<<"Index for the target = "<<y;

    return 0;
}