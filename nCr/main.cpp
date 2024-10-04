#include<iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    for (int i = num; i>0; --i){
        ans = ans * i;
    }
    return ans;
}

int main(){
    int n,r;
    cout<< "Enter n: ";
    cin>> n;
    cout<< "Enter r: ";
    cin>> r;

    int nCr = factorial(n)/(factorial(r)*factorial(n-r));

    cout<<nCr<<endl;


}