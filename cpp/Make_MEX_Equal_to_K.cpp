#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cin >> k;
    bool is_k_found = false;
    
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            is_k_found = true;        
            break;
        }
    }
            
    if(is_k_found){
        cout << -1 << endl;
    }
    else{
        int count = 0;

        for(int i=0; i<k; i++){
            bool found = false;

            for(int j=0; j<n; j++){                
                if(arr[j] == i){
                    found = true; 
                    break;           
                }
            }

            if(!found){
                count++;
            } 
        }

        cout << count << endl;    
    }

    return 0;
}