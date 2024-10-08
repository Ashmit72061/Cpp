#include <iostream>
using namespace std;

int main()
{

    // Let’s say the given array is = {3, 4, 6, 7, 9,y 12, 16, 17} and target = 6.

    int x[] = {3, 4, 6, 7, 9, 12, 16, 17};

    int size = sizeof(x) / sizeof(x[0]);
    int y; //y = final answer

    int target = 16;

    int first = 0;
    int last = size-1;

    int i = 0;
    while(i == 0){
        int mid = (first + last)/2;
        if (x[mid] == target){
            y = mid;
            break;
        }
        else if (x[mid] > target){
            last = mid-1;
        }
        else if (x[mid] < target){
            first = mid+1;
        }
    }

    cout<<"Index for the target = "<<y;

    return 0;
}