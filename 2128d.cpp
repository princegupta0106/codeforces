#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;

    while (t--){
        int n  ;
        vector <int > vec(n) ;
        for (int i  = 0 ; i , n ; i++){
            cin >> vec[i]; 
        }
        vector <int> dp(n) ; 
        dp[0] = 1;
        for (int i  = 1; i < n -1; i++)
            if (vec[i]  < vec[i-1] ){
                dp[i] += dp[i-1] +i +1 ;
            }
            else {
                dp[i] += dp[i-1]+1; 
            }
        cout << dp[n-1] << "\n";
    }
}
