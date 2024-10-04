#include <iostream>
using namespace std;

void hanoi (int a[],int b[],int c[],int n)
{
    //number of discs in that tower
    int x = -1 ,y = -1,z = -1;
    for (int i = 0; i<n;++i){
        if(x == -1 && a[i] == 0){
            x = i;
        }
        if(y == -1 && b[i] == 0){
            y = i;
        }
        if(z == -1 && c[i] == 0){
            z = i;
        }
        if(x!=-1 && y!=-1 && z!=-1){
            break;
        }
    }

    
}

int main() 
{
    int n;
    cout<<"Enter number of discs: ";
    cin>>n;

    int a[100] = {0};
    int b[100] = {0};
    int c[100] = {0};

    //Creating initial disc arr
    for (int i = 0; i<n;++i){
        a[i] = n-i;
    }

    hanoi();
    return 0;
}