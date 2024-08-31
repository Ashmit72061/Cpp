#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number you want to conver to binary: ";
    cin>>number;

    // int bit = number & 1;
    // cout<<bit;

    int temp;
    long int answer = 0;
    int i = 0;
    while(number !=0){
        // cout<<"This is i: "<<i<<endl;
        temp = number &1;
        // printf("%d\n", temp);
        answer = (temp * pow(10, i)) + answer;
        // cout<<answer<<endl;
        ++i;
        number = number >>1;
    }

    cout<<"Binary = "<<answer<<endl;

    return 0;
}