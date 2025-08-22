#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q ;
    cin >>n >> q;
    vector <int> a(n) ; 
    for (int i = 0 ; i < n ; i++){
        cin >> a[i]; 
    }
    int sum = 0 ;
    unordered_map<int, int> map ;
    for (int i = 0 ; i < n ; i++){
        sum += a[i]; 
        map[i] = a[i];
    }
   
    int prevx = 0;
    while (q--){
        
        int t ; 
        cin >> t; 
        
        if (t ==1 ){
            int i , x ;
            cin >>  i >>  x ;
            if (map.find(i-1) != map.end()){
                sum -= map[i-1];
                sum += x; 
            }
            else{
                sum -= prevx;
                sum += x;
            }
            map[i-1] = x; 
            cout << sum << "\n"; 
            
        }
        else {
            int x ;
            cin >> x; 
            map.clear();
            sum = n*x; 
            prevx = x;
            cout << sum << "\n"; 
        }
    }
    
        
}
