#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int size)
{
    bool didwesort = true;
    for (int i = size-1; i >=0; --i)
    {
        for (int j = 0; j < i ; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didwesort = true;
            }
        }
        if (didwesort == false){
            break;
        }
    }
}

int main() {
	int n,q;
	cin>>n>>q;
	int roots[100];
	for(int i =0; i<n;++i){
	    cin>>roots[i];
	}
	bubblesort(roots,n);
	for(int i = 0; i<q;++i){
	    int x;
	    cin>>x;
	    //sort
	    //bs for least
	    int first = 0, last = n-1;
		while(first<=last){
			int mid = (first + last)/2;
			if(roots[mid]==x){
				first = -1;
				break;
			}
			if(roots[mid]>x){
				last = mid -1;
			}
			if(roots[mid]<x){
				first = mid +1;
			}
		}
		if(first == -1){
			cout<<"0"<<endl;
		}
		else if(first%2 == 0){
			cout<<"POSITIVE"<<endl;
		}
		else{
			cout<<"NEGATIVE"<<endl;
		}
	}
	
	return 0;

	

}
