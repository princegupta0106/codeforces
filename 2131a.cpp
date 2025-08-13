#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int x = 0;
    while (T--) {
        string s;
        cin >> s;
        if (s.find('+') != string::npos) {
            x++;
        } else {
            x--;
        }
    }
    cout << x;
}
