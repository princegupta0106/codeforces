#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; 
    cin >> t;
    while (t--){
        int n , k ; 
        cin >> n >> k ; 
        vector <int> vec(n); 
        for (int i = 0 ; i < n ; i++){
            cin >> vec[i] ;
        }
        int temp =  0; 
        int res = 0; 
        for (int i = 0 ; i< n ; i++){
            if (vec[i] ==0 ){
                temp +=1 ; 
                if (temp ==k){
                    res +=1 ; 
                    i+=1 ; 
                    temp = 0; 
                }
            }
            else{
                temp = 0;
                
            }
        }
        cout << res <<'\n';
    }
}
