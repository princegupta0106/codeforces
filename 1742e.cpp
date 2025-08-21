#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n, q;
        cin >> n >> q;

        vector<long long> stairs(n);
        vector<long long> que(q);
        vector<long long> sum(n);
        vector<long long> maximum(n);

        long long maxi = -1;
        long long s = 0;
        for (int i = 0; i < n; i++) {
            cin >> stairs[i];
            maxi = max(maxi, stairs[i]);
            maximum[i] = maxi;
            s += stairs[i];
            sum[i] = s;
        }

        for (long long i = 0; i < q; i++) {
            cin >> que[i];
        }

        for (int i = 0; i < q; i++) {
            long long x = que[i];
            // Find first index where maximum[i] > x
            int pos = upper_bound(maximum.begin(), maximum.end(), x) - maximum.begin();
            if (pos == 0) {
                cout << 0 << " ";
            } else {
                cout << sum[pos - 1] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
