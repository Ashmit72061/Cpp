#include<iostream>
using namespace std;

int main (){

    int x;
    cout << "Enter the number you want to find sum";
    cin >> x ;
    int sum = 0;

    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    
    cout << "Sum of numbers is: " << sum;
}