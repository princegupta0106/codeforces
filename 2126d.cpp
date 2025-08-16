#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    int n , k;
   
    while (t--){
        cin >> n >> k;
        vector <tuple <int ,int ,int >>  cas(n); 
        int res = 0;
        for(int i=0 ; i < n ; i++){
            auto & [l,r,real] = cas[i];
            cin >> l >> r >> real ; 

        }
        sort(cas.begin() , cas.end());
        int cur =  k;
        for (int i  = 0 ; i< n ; i++){
            if (cur < get<0>(cas[i]) ) break;
            cur = max(cur ,get<2>(cas[i]));
        }
        cout << cur << "\n";

    }
}