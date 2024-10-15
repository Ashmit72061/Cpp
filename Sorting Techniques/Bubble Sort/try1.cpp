#include <iostream>
using namespace std;
void shiftright(int arr[], int last)
{
    for (int i = 0; i < last - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            // swap
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}

void printarr(int arr[], int size)
{
    cout << "\narr = ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {2, 135, 631, 36, 4243, 1, 36, 5, 213, 475, 24, 6, 26, 4, 2, 467, 424, 7, 4, 2, 464, 2, 67, 668, 24, 57, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i)
    {
        shiftright(arr, size - i);
    }

    printarr(arr, size);

    return 0;
}