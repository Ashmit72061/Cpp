



#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number you want to conver to binary: ";
    cin>>number;

    // int bit = number & 1;
    // cout<<bit;

    
        number = number* (-1);
        int temp;
        int answer = 0;
        int i = 0;
        while(number !=0){
            temp = number &1;
            temp = ~temp;
            answer = (temp * pow(10, i)) + answer;
            ++i;
            number = number >>1;
        }

        cout<<"Binary = "<<answer + 1<<endl;
    

    // cout<<"Binary = "<<answer<<endl;

    return 0;
}