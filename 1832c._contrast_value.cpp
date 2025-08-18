#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> c(n);
        for (int i = 0; i < n; i++) cin >> c[i];
        vector<long long> a;
        a.push_back(c[0]);
        for (int i = 0; i < n; i++) {
            if (c[i] != a.back()){
                a.push_back(c[i]);
            }
        };

        // If all equal → answer is 1
        if (all_of(a.begin(), a.end(), [&](long long x){ return x == a[0]; })) {
            cout << 1 << "\n";
            continue;
        }

        vector<long long> b;
        b.push_back(a[0]);
        n = a.size(); 

        for (int i = 1; i < n-1; i++) {
            if ((a[i] > a[i-1] && a[i] > a[i+1]) ||  // local peak
                (a[i] < a[i-1] && a[i] < a[i+1])) {  // local valley
                b.push_back(a[i]);
            }
        }

        b.push_back(a[n-1]);

        cout << b.size() << "\n";
    }
}
