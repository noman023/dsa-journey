#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    int min_frequency = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == min){
            min_frequency++;
        }
    }
    
    cout << (min_frequency % 2 != 0 ? "Lucky":"Unlucky");
    
    return 0;
}