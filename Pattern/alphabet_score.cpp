#include<iostream>
using namespace std;

int main(){

    // int starting_alphabet;
    // cout<< "Enter the character you want this pattern to start with: ";
    // cin>> starting_alphabet;

    int number_of_rows;
    cout<< "Enter the number of rows you would like this square to have ";
    // scanf("");
    cin>> number_of_rows;

    // int ascii = starting_alphabet
    int starting_alphabet = 'A';

    for(int i = 1; i<= number_of_rows; ++i){
        cout<< endl;
        for (int j = 1; j<= number_of_rows; ++j){
            printf("%c ", starting_alphabet);
        }
        ++starting_alphabet;
    }

    return 0;
}