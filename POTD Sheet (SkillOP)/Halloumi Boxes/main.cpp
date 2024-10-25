#include <bits/stdc++.h>
using namespace std;

int main() {
    int noOfInput;
    cin>>noOfInput;
    for(int i = 1; i <=noOfInput;++i){
        int n,k;
        cin>>n>>k;
        // int arr[n];
        vector<int> arr(n);
        int sorted = 0;
        //input array
        for (int i =0; i < n;++i){
            cin>>arr[i];
            if(i>0 && arr[i]<arr[i-1]){
                ++sorted;
            }
        }
        if(sorted == 0 || k>1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}