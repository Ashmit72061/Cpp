#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    char arr[4][100];
    for(int i = 0; i<=x;++i){
        cout<<"This is i: "<<i<<endl;
        cin>>arr[4][i];
        cout<<"Output: "<<arr[4][i]<<endl;
    }
    for(int i = 0; i<=x;++i){
        cout<<arr[4][i];
    }

    return 0;
}