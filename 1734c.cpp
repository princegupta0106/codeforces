#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    
    int t; 
    cin >> t ; 
    while (t--){
        int n  ;
        cin >>n;
        string s ;
        cin >> s ; 
        int res = 0; 
        string p = s;
        string d =s ;
        for (int i =0 ; i< n ; i++){
            int temp = i+1; 
            if (s[i] =='0'){
                int j = i;
                while (j < n ){
                    if (s[j] == '0' ){
                        if ( p[j] =='0'){
                            res += i+1;
                            p[j] = '1';
                        }
                    }
                    else {
                        break;
                    }
                    j+=i+1;
                    
                }
            }
        }
        cout << res << "\n"; 
    }

    return 0;
}