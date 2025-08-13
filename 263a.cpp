#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0; 
    for (int i  = 0; i < 5 ; i++){
        for (int j  = 0 ; j < 5  ;j++){
            cin >> a ;
            if (a ==1){
                int res = abs(i-2) +abs(j-2);
                cout << res;
                return 0;
                break;
            }
        }
    }
    
}

