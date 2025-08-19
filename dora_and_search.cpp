#include <bits/stdc++.h>
using namespace std;
#define long long long


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--) {
        int n ; 
        cin >> n;
        vector <int> dora(n); 
        
        
        for ( int i = 0 ; i < n ; i++){
            cin >> dora[i];
            
        }
        
        int l = 0; int r = n-1 ;
        vector <int> res;
        int s = 1 , e = n;
        int a  =-1 , b =-1 ; 
        while (l <= r-3){
            if (dora[l] == s ){
                l++;
                s++;
            }
            else if (dora[l] == e){
                l++ ;
                e-- ;
            }
            else if (dora[r] ==s){
                r-- ;
                s++; 
            }
            else if (dora[r] == e){
                r--;
                e--;
            }
            else {
                a = l+1 ;
                b = r+1; 
                break;
            }
        }
        if (a != -1){
            cout << a << " " << b << "\n" ;       
        }
        else {
            cout << -1 << "\n";
        }
        
    }
    
}

