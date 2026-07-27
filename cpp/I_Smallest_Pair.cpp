#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;   
    
    while(t--){        
        int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int smallest_sum = INT_MAX;
        
        for(int i=0; i<n; i++){            
            for(int j=i+1; j<n; j++){                
                int current_sum = arr[i] + arr[j] + (j - i);

                if(smallest_sum > current_sum){
                    smallest_sum = current_sum;
                }
            }

        }    

        cout << smallest_sum << endl;
    }

    return 0;
}