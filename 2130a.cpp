#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T; 
    cin >> T;
    int x = 0;
    while (T--) {
        int n  = 0 ;
        int sum = 0;
        cin >> n;
        for (int i = 0 ; i <n ; i++){
            int a  = 0;
            cin >> a ;
            if (a<=0){
                sum +=1 ;
            }
            else{
                sum += a;
            };
        }

         
        cout << sum<<"\n" ;
    
    }
}
