#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 0 ;
    cin >> t; 
    while (t --){
        int n ;
        int c;
        cin >> n >> c;

        vector <int> vec(n);
        for (int i= 0 ; i < n ; i++){
            cin >> vec[i];

        };
        sort(vec.begin() , vec.end());
        
        int count  = 0 ;
        for (int i = n-1  ; i>=0 ; i--){
            if (vec[i] <=c){
                count ++;
                c /=2 ;
            }
        }
        cout << n-count << "\n";


        

    }
}