#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t ;
     while (t--){
        long long  n ; 
        cin >>n ;
        long long  minimum  = 0;
        minimum = INT_MAX;
        bool flag  = true ;
        for (int i  = 0;  i< n ; i++){
            long long temp  ;
            cin >> temp;
            if (temp >=2*minimum ){
                flag  = false; 
            }
            else {
                minimum = min(minimum  , temp);
            }
        }
        if (flag){
            cout << "YES\n" ; 
        }
        else{
            cout << "NO\n" ;
        }
        

     };
};