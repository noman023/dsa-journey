#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {    
        int  n, s;
        cin >> n >> s;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr + n);
        bool is_summable = false;

        for(int k=0; k<n-2; k++){
            int first_digit = arr[k];

            int i = k+1, j = n-1;            
            while(i < j){
                int current_sum = first_digit + arr[i] + arr[j];

                if(current_sum == s){
                    is_summable = true;
                    break;
                }
                else if(current_sum < s){
                    i++;
                }
                else{
                    j--;
                }
            }

            if(is_summable) break;
        }
        
        cout << ( is_summable ? "YES" : "NO") <<endl;        
    } 

    return 0;
}