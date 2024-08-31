#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number you want to conver to binary: ";
    cin>>number;

    if (number>0){
    int temp;
    int answer = 0;
    int i = 0;
    while(number !=0){
        cout<<"This is i: "<<i<<endl;
        temp = number &1;
        printf("%d\n", temp);
        answer = (temp * pow(10, i)) + answer;
        cout<<answer<<endl;
        ++i;
        number = number >>1;
    }

    cout<<"Binary = "<<answer<<endl;
    }
    else{
        //2s compliment
        number = number* (-1);
        int temp;
        int answer = 0;
        int i = 0;
        while(number !=0){
            temp = number &1;
            // temp = ~temp;
            // switch (temp)
            // {
            // case 1:
            //     temp = 0;
            //     break;
            
            // default:
            //     temp = 1;
            //     break;
            // }
            // cout<<temp<<endl;
            answer = (temp * pow(10, i)) + answer;
            ++i;
            number = number >>1;
        }

        cout<<"Binary = "<<answer<<endl;
    }
    return 0;
    }


