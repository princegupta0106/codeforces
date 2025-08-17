#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long  n , x ,y ;
        cin >> n  >>x  >>y ; 
        
        long long  r  , c ;
        r = n/x ; 
        c  = n/y ; 
        
        long long  l = n/(lcm(x,y)); 
        long long  e = r -l ;
        long long  s = c - l ; 
      
        long long  res = (n*(1+n)/2) - ((n-e)*(n-e+1)/2) - s*(1+s)/2 ;
        cout << res << '\n'; 
    }
}
