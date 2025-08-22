#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t ; 
    while (t--){
        long long n ; 
        cin >> n ; 
        long long p = 10;
        vector <long long > res;
        while (p < n ){
            if ( n%(p+1) ==0 ){
                res.push_back( n/(p+1) );
            }
            p*=10; 
        }
        sort(res.begin(), res.end()); 
        cout << res.size() << "\n" ; 
        for (int i = 0 ; i< res.size() ; i++){
            cout << res[i] << " ";
        }
        if (res.size()){
            cout << '\n' ;
        }
    }
    return 0;
}