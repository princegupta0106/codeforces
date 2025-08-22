#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t ; 
    while (t--){
        long long n ; 
        cin >> n ; 
        int temp  = n ; 
        vector <long long > binary ;
        long long res = 0 ; 
        int  p = 1 ; 
        while (temp > 0){
            binary.push_back(temp%3); 
            temp /=3 ;
        }
        for (int i = 0 ; i< binary.size() ; i++){
            res += binary[i]*(pow(3, i+1) + i*(pow(3, i-1))) ; 
        }
        cout  << res << "\n"; 
        
    }
    return 0;
}