#include<iostream>
using namespace std;

int main(){

    int number_of_rows;

    cout<<"Number of rows to print: ";
    cin>> number_of_rows;

    int alphabet;

    for (int i = 1; i <= number_of_rows; ++i){
        cout << endl;
        // alphabet = 'A';
        alphabet = 'A' + number_of_rows - i;

        for(int j = 1; j<=i; ++j){

            printf("%c", alphabet);
            ++alphabet;
        }
    }


    return 0;
}