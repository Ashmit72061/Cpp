#include <iostream>
using namespace std;

int search(int n){
    int first = 0;
    int last = n;
    int mid = (first + last)/2;
    int ans = -1;

    while(first<=last){
        int sq = mid*mid;
        if (sq == n) {
          return mid;
        }

        if (sq <n){
            ans = mid;
            first = mid +1;
        }
        // if (sq > n) 
        else
        {
            last = mid - 1;
        }
    }
}

// int floorSqrt(int n)
// {
//     //n>4
//     // if (n>4){
//     //     //binary search n/2 to n
//     //     return search(0,n/2,n);
//     // }
//     // else {
//         // return search(n/2,n,n);
//     // }

    
//     return search(n);
// }


int main() {

    cout<<search(8);
    
    return 0;
}