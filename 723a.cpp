#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> houses;
    int a ; 
    int res = 0;
    while (cin >> a){
        houses.push_back(a);
    }
    sort(houses.begin() , houses.end());
    for (int i = 0 ; i < houses.size() ;i ++){
        res+=abs(houses[houses.size()/2] - houses[i]);
    }
    cout << res; 
}


