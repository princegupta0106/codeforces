#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t ; 
    while (t--){
        int n , m ; 
        cin >> n ; 
        string a ,b , c ,res; 
        cin >> a ; 
        cin >> m ;
        cin >> b ;
        cin >> c ;
        
        string d ; 
        string v ; 
        for (int i = 0 ; i < m ; i++){
            if (c[i] == 'D'){
                d+= b[i]; 
            }
            else {
                v+= b[i]; 
            }
        }
        reverse(v.begin(), v.end());
        res += v ; 
        res += a  ; 
        res += d ; 
        cout  << res << '\n'; 
    }

    return 0;
}