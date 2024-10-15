#include <iostream>
using namespace std;
void bubblesort(int arr[],int size)
{
    bool didwesort = true;
    for (int i = size-1; i >=0; --i)
    {
        for (int j = 0; j < i ; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didwesort = true;
            }
        }
        if (didwesort == false){
            break;
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

    bubblesort(arr,size);

    printarr(arr, size);

    return 0;
}