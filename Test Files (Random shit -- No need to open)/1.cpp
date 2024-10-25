#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int> &arr, int size)
{
    int first = 0, last = size, mid;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] >= arr[0])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return mid;
}

bool binarysearch(vector<int> &arr, int target, int first, int last)
{
    bool ans = 0;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == target)
        {
            ans = 1;
            break;
        }
        else if (arr[mid] > target)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return ans;
}

bool roatedsearch(vector<int> &nums, int target)
{
    int n = nums.size() - 1;

    cout<<"n = "<<n<<endl;

    // find lower bound first
    int point = lowerbound(nums, n);
    cout<<point<<endl;
    bool ans = 0;

    // target in left ascend
    if (target == nums[0]){ans=1;}
    if(nums[0]==nums[n]){
        //bs on both
        ans = binarysearch(nums, target, point, n) || binarysearch(nums, target, 0, point);
    }
    else if (target > nums[0])
    {
        // bs in left ascend
        ans = binarysearch(nums, target, 0, point );
    }
    // target in right ascend
    else
    {
        // bs in right ascend
        ans = binarysearch(nums, target, point, n);
    }
    return ans;
}

int main()
{
    cout << "Hello" << endl;

    vector<int> arr = {1,0,1,1,1};

    bool ans = roatedsearch(arr,0);

    cout<<ans;

    return 0;
}