#include <bits/stdc++.h>
using namespace std;

int main() {
    int res = 0;
    int m= 0;
    cin >> m;
    bool flag  = true; 
    while (m --){
        int temp = 0 ;
        cin >> temp; 
        if (temp == 1 ){
            flag = false; 
            cout << "HARD"; 
            break ;
            
        }
    }
    if (flag){
        cout << "EASY"; 
    }
    
    
}


