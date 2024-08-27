#include <iostream>
using namespace std;

int main()
{

    int rows;
    cout << "Enter the number of rows you would like to see of this pattern : ";
    cin >> rows;

    // number will be the variable for for loop for printing numbers
    for (int i = 1; i <= rows; ++i)
    {
        for (int space1 = 1; space1 <= (rows - i); ++space1)
        {
            cout << " ";
        }
        for (int number1 = 1; number1 <= i; ++number1){
            cout<<number1;
        }
        for (int number2 = i; number2 >1; --number2){
            cout<<number2 - 1;
        }
        // for (int space2 = 1; space2 <= (rows - i); ++space2)
        // {
        //     cout << " ";
        // }
        cout<<endl;
    }

    return 0;
}