#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int highest_price = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= k){
            if(highest_price <= arr[i]){
                highest_price = arr[i];
            }
        }
    }

    cout << ( highest_price == 0? -1: highest_price ) << endl;

    return 0;
}