#include <iostream>
#include <math.h>
using namespace std;

int number_of_digits(int binary)
{
    // int count = 0;
    // while (binary != 0){
    //     binary /=10;
    //     ++count;
    // }
    // return count;

    int digits = log10(binary);
    return (digits+1);
}

int main()
{

    int binary;
    cout << "Enter Binary: ";
    cin >> binary;
    int intial_binary = binary;

    cout<<"Number of digits = "<< number_of_digits(binary)<<endl;

    int temp, answer = 0, count = 0;
    
    // for(int i = 0; i<= number_of_digits(binary); ++i){
        // temp = binary % 10;
        // binary = binary / 10;
        // answer = (temp*pow(2,i)) + answer;
        // cout<<"i="<<i<<" temp = "<<temp<<" binary = "<<binary<<" answer = "<<answer<<endl;
    // }

    while (binary !=0){
        temp = binary % 10;
        answer = (temp*pow(2,count)) + answer;
        ++count;
        binary = binary / 10;
        cout<<"i="<<count<<" temp = "<<temp<<" binary = "<<binary<<" answer = "<<answer<<endl;
    }

    cout<<"Decimal of "<<intial_binary<<"="<<answer<<endl;

    return 0;
}