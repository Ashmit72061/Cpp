#include<iostream>
using namespace std;

int main(){
    int x[]= {4,3,2,7,8,2,3,1};
    int no_of_terms = sizeof(x)/sizeof(x[0]);
    int i = 0, j =0;

    while (i <no_of_terms){
        if(i==j){++j;continue;}
        if (x[i] == x[j]){
            cout<<"duplicate = "<<x[j]<<endl;
            // break;
            ++i;
            j = 0;
        }
        if(j == no_of_terms-1){
            ++i;
            j = 0;
        }
        ++j;
    }
}