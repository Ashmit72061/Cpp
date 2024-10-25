#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,maxDistance = 0,initialPtr = 0;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i = 0; i<n;++i){
        cin>>arr[i];
        maxDistance = (maxDistance>(arr[i]-initialPtr))? maxDistance:(arr[i]-initialPtr);
        initialPtr = arr[i];
        // cout<<"Max Distance = "<<maxDistance<<endl;
    }
    maxDistance = (maxDistance>2*(x-arr[n-1]))? maxDistance:2*(x-arr[n-1]);
    cout<<maxDistance<<endl;
}

int main() {
    int a;
    cin>>a;
    while(a--){
        solve();
    }
    // solve();
    return 0;
}