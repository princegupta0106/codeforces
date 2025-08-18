#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k; 
        vector<int> colors(n);

        for (int i = 0; i < n; i++) {
            cin >> colors[i]; 
        }

        // vec[i] = {max_gap, second_max_gap, last_index}
        vector<vector<int>> vec(k+1);
        for (int i = 0; i <= k; i++) {
            vec[i].push_back(0);
            vec[i].push_back(0);
            vec[i].push_back(-1);  // last index = -1 initially
        }

        // primary loop
        for (int i = 0; i < n; i++) {
            int c = colors[i];
            int temp = i - vec[c][2] - 1;

            if (temp >= vec[c][0]) {
                vec[c][1] = vec[c][0];
                vec[c][0] = temp;
            } else if (temp >= vec[c][1]) {
                vec[c][1] = temp;
            }

            vec[c][2] = i; 
        }

        // handle suffix gap
        for (int i = 1; i <= k; i++) {
            int gap = n - vec[i][2] - 1;
            if (gap >= vec[i][0]) {
                vec[i][1] = vec[i][0];
                vec[i][0] = gap;
            } else if (gap >= vec[i][1]) {
                vec[i][1] = gap;
            }
        }

        int res = INT_MAX;
        for (int i = 1; i <= k; i++) {
            res = min(res, max(vec[i][1], vec[i][0] / 2));
        }

        cout << res << "\n"; 
    }
}
