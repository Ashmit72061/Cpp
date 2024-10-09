#include <iostream>
using namespace std;

int main()
{

    int nums[] = {1,3,5,6};
    int target = 7;
    int size = sizeof(nums) / sizeof(nums[0]);
    int first = 0, last = size - 1;

    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;

        // not an answer
        if (target > nums[mid])
        {
            first = mid + 1;
        }
        // maybe answer
        else if (target <= nums[mid])
        {
            last = mid - 1;
        }
    }

    cout<< first;

    return 0;
}
