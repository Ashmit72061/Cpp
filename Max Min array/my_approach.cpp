#include <iostream>
using namespace std;

// int Max_of_array(int x[],int i, int y){
//     // (x[i]>x[i+y])? ++y:Max_of_array(x[i+1]);
//     if(x[i]>x[i+y]){
//         ++y
//         Max_of_array()
//     }
//     return i;
// }

int main()
{

    int x[] = {4, 12, 8, 17, 88, 13, 24, 7, 13, 62, 15, 7463, 134, 73, 113, 642, 111};
    // int i = 1, y = 1;
    // cout<<"maximum is: "<<Max_of_array(x,i,y);
    int number_of_terms = (sizeof(x) / sizeof(x[0]));
    int ans = 0, temp1 = 0, temp2 = 0;

    if ((number_of_terms & 1) == 0)
    {
        cout<<"even"<<endl;
        for (int i = 0; i < (number_of_terms >> 1)-1; ++i)
        {
            if (x[i]>x[i+1]){
                x[i+1] = x[i];
            }
            if(x[number_of_terms-1-i]>x[number_of_terms-2-i]){
                x[number_of_terms-2-i]=x[number_of_terms-1-i];
            }
        }
        (x[(number_of_terms >> 1)-1]>x[(number_of_terms >> 1)])?cout<<x[(number_of_terms >> 1)-1]:cout<<(x[(number_of_terms >> 1)]);

    }

    else
    {
        cout<<"odd"<<endl;

        for (int i = 0; i < (number_of_terms >> 1)-1; ++i)
        {
            if (x[i]>x[i+1]){
                x[i+1] = x[i];
            }
            if(x[number_of_terms-1-i]>x[number_of_terms-2-i]){
                x[number_of_terms-2-i]=x[number_of_terms-1-i];
            }
        }

        // cout<< x[(number_of_terms >> 1)-1]<<endl;
        // cout<< x[(number_of_terms >> 1)]<<endl;
        // cout<< x[(number_of_terms >> 1)+1]<<endl;

        if(x[(number_of_terms >> 1)-1]>x[(number_of_terms >> 1)]){
            if(x[(number_of_terms >> 1)-1]>x[(number_of_terms >> 1)+1]){
                cout<<x[(number_of_terms >> 1)-1];
            }
        }
        if(x[(number_of_terms >> 1)]>x[(number_of_terms >> 1)-1]){
            if(x[(number_of_terms >> 1)]>x[(number_of_terms >> 1)+1]){
                cout<<x[(number_of_terms >> 1)];
            }
        }
        if(x[(number_of_terms >> 1)+1]>x[(number_of_terms >> 1)]){
            if(x[(number_of_terms >> 1)+1]>x[(number_of_terms >> 1)-1]){
                cout<<x[(number_of_terms >> 1)+1];
            }
        }

        // for(int i = 0; i <number_of_terms; ++i){
        //     cout<<" "<<x[i];
        // }

        // int max_val = (x[(number_of_terms >> 1) > x[(number_of_terms >> 1)) ? ((x[(number_of_terms >> 1) > x[(number_of_terms >> 1)) ? x[(number_of_terms >> 1) : x[(number_of_terms >> 1)) : ((x[(number_of_terms >> 1) > x[(number_of_terms >> 1)) ? x[(number_of_terms >> 1) : x[(number_of_terms >> 1));
    }

    return 0;
}