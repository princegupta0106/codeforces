#include <bits/stdc++.h>
using namespace std;

int mex3(int x, int y, int z) {
    bool present[4] = {}; // initialize all to false
    for (int v : {x, y, z}) {
        if (v >= 0 && v < 4) present[v] = true;
    }
    for (int i = 0; i < 4; i++)
        if (!present[i]) return i;
    return 4; // should never reach
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;
        vector<int> nums(n);
        for (int &v : nums) cin >> v;

        bool flag = true;
        for (int i = 0; i + 2 < n; i++) {
            // If any element in the triple is missing (-1), skip check
            if (nums[i] == -1 || nums[i + 1] == -1 || nums[i + 2] == -1)
                continue;

            int mn = min({nums[i], nums[i + 1], nums[i + 2]});
            int mx = max({nums[i], nums[i + 1], nums[i + 2]});
            int me = mex3(nums[i], nums[i + 1], nums[i + 2]);

            if (me != mx - mn) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
}
