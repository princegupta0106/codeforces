#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        int l = 0;
        long long sum = 0;
        int maxLen = -1;

        for (int r= 0 ; r  <n ; r++){
            sum += vec[r]; 
            while (sum > k && l <=r ){
                sum -= vec[l] ; 
                l ++; 
            }
            maxLen = max(maxLen , r-l+1);
        }
        if (sum < k) {
            cout << -1 << "\n";
        } else {
            cout << n - maxLen << "\n"; // minimum removals
        }
    }
}
