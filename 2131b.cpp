#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
()
    int T; 
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;

        if (n == 2) {
            cout << "-1 2\n";
            
            continue;
        }
        if (n%2){
            for (int i = 0 ; i < n/2 ; i++){
                cout << "-1 3 ";
            }
            cout << "-1\n";
        }
        else{
            for (int i = 0 ; i < n/2-1 ; i++){
                cout << "-1 3 ";
                
            }
            cout << "-1 2\n";

        }
    }
}
