#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,-4,11,2,-5,2,-6,24,-64,-24,45,-11};

    int number_of_terms = sizeof(arr)/sizeof(arr[0]);
    int first_index = -1,last_index = -1, ans1, ans2,ans = 0,no_of_positive_terms;
    for (int i = 0; i < number_of_terms; ++i){
        if(arr[i]>0){
            // first_index = i;
            ++no_of_positive_terms;
        }
        // if(arr[i]>0){
        //     first_index = i;
        // }
        if(arr[number_of_terms-i-1]>0){
            last_index = number_of_terms-i-1;
            // break;
        }
        // if(first_index>=0 && last_index>0){
        //     break;
        // }
    }
    // cout<<first_index<<endl<<last_index<<endl;

    for (int i = 0; i < number_of_terms; ++i){
        if(arr[i]>0){
            for (int n = 0; n<= no_of_positive_terms-i;++n){
            // ++n;
                int n2=n;
                for(int j=i; j<=last_index;++j){
                    ans1= ans1+arr[j];
                    if(arr[j]>0 && n2 == 0){
                        break;
                    }
                    --n2;
                }
                // int n2=n+1;
                // for(int j=i; j<=last_index;++j){
                //     ans2= ans2+arr[j];
                //     if(arr[j]>0 && n2 == 0){
                //         break;
                //     }
                //     --n2;
                // }
                ans = (ans>ans1)?ans:ans1;
            }
        }
    }

    cout<<ans;

    return 0;
}