#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t; 
    cin >> t ; 
    while (t--){
        int n;
        cin >> n ; 
        vector <string> matrix(n);
        
        for (int i = 0 ; i < n  ; i++){
            cin >> matrix[i] ; 
        }
        int res = 0 ; 
        int temp = 0 ; 
        for (int i = 0 ; i< n/2 ; i++){
            
            for (int j  = i ; j < n-i-1 ; j++){
                int zeros = 0; 
                int ones  =0 ; 
            
                if (matrix[i][j] =='0' ){
                    zeros +=1 ;
                }
                if (matrix[j][n-i-1] =='0' ){
                    zeros +=1 ;
                }
                if (matrix[n-1-i][n-1-j] =='0' ){
                    zeros +=1 ;
                }
                if (matrix[n-1-j][i] =='0' ){
                    zeros +=1 ;
                }
                res += min(zeros , 4-zeros);
            }
        }
        
        cout << res << '\n'; 
    }
    
    return 0;
}