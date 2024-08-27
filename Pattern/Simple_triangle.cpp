#include <iostream>
using namespace std;

int main()
{

    int number_of_rows;
    cout << "how many rows would you like to print of the patten: ";
    cin >> number_of_rows;

    // int j;
    int count = 1;
    for (int i = 1; i <= number_of_rows; ++i)
    {
        // j = i;
        for(int j = i; j>0; --j){

            // printf("*");
            cout << j<<" ";
            // cout<< count<<" ";
            // ++count;

        }
        cout << "\n";
    }

    return 0;
}