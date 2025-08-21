#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
 
    
    int t; 
    cin >> t ; 
    while (t--){
        int n ; 
        cin >> n ; 
        vector <int> x(n);
        vector <int> y(n); 
        vector <int> diff(n);
        for (int i = 0 ; i < n ; i++){
            cin >> x[i];
        }
        for (int i = 0 ; i < n ; i++){
            cin >> y[i];
        }
        for (int i = 0 ; i < n ; i++){
            diff[i] = y[i] - x[i];
        }
        // for (int i = 0 ; i < n ; i++){
        //     cout << diff[i] << ' ' ; 
        // }
        
        sort(diff.begin(), diff.end());
        int l =0, r =n-1; 
        int res = 0;
        while (l < r ){
            if (diff[l] +diff[r] >= 0 ){
                res +=1 ;
                l+=1 ; 
                r-=1 ;
            }
            else {
                l+=1 ; 
            }
        }
        cout << res <<'\n';
    }
    return 0;
}