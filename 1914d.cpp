#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
    int n;
    cin >> n;
    vector<pair<int ,int >> a(n); 
    vector<pair<int ,int >> b(n); 
    vector<pair<int ,int >> c(n); 
   
    
    for (int i = 0 ; i < n ; i++){
        cin >> a[i].first ;
        a[i].second = i;
    }
    for (int i = 0 ; i < n ; i++){
        cin >> b[i].first ;
        b[i].second = i;
    }
    for (int i = 0 ; i < n ; i++){
        cin >> c[i].first ;
        c[i].second = i;
    }
    
    sort(a.begin() ,a.end());
    sort(b.begin() ,b.end());
    sort(c.begin() ,c.end());
    int res = 0; 
    for ( int i  = n-1  ; i >= n-3  ; i--){
        for (int j = n-1  ; j >= n-3  ;j--){
            if (a[i].second == b[j].second ) {
                    continue ;
                }
            for (int k = n-1 ; k >= n-3 ;k--){
                if ( a[i].second == c[k].second ||c[k].second == b[j].second) {
                    continue ;
                }
                 
                res = max(res , a[i].first +b[j].first +c[k].first); 
            }
        }
    }
    cout <<  res << "\n";
}
}