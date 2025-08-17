#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long > nums(n);
        long long a, b;
        for (int i = 0; i < n; i++) {
            cin >> a;
            nums[i] = a;
        }

        long long  mod = 2;
        unordered_set<long long> s;
        for (int i = 0; i < 60; i++) {
            s.clear();
            for (int j = 0; j < n; j++) {
                s.insert(nums[j] % mod);
            }
            if (s.size() >= 2) {
                break;
            }
            mod*=2;
        }
        cout << mod << "\n";
    }
    return 0;
}
