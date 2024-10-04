#include<iostream>
using namespace std;

int main(){
    int array1[] = {1,2,3,4,5,6,7,8,9,10};
    int array2[] = {1,5,130};
    int count = 0;

    for(int i = 0; i <=3; ++i){
        for (int j = 0; i <= 10; ++j){
            if(array2[i]==array1[j]){
                ++count;
                break;
            }
            // else{continue;}
        }
    }
    cout<<count;
    if (count == 3){
        cout<<"true";
    }
    else{cout<<"false";}
}   