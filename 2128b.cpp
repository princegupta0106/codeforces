#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T; 
    cin >> T;
    
    while (T--) {
        int n  = 0 ;
        cin >> n;
        vector<int> vec(n); 
        for (int  i = 0 ; i< n ; i++){
            cin >> vec[i];
        }
        
        int  l= 0 , r = n-1 ;
   
        bool flag  = true;
        while (l <= r){
            if (flag){
                if (vec[l] <= vec[r]){
                    cout << "L";
                    l+=1; 
                }
                else{
                    cout << "R";
                    r-=1 ;
                }
            }
            else{
                if (vec[l] >= vec[r]){
                    cout << "L";
                    l+=1 ;
                    
                }
                else{
                    cout << "R";
                    r-=1 ;
                }
            }
            flag = ! (flag) ;
        }
        cout << "\n";
    }
}
