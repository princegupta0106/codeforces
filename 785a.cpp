#include <bits/stdc++.h>
using namespace std;

int main() {
    int m= 0;
    cin >> m;
    unordered_map<string , int> map;
    int res = 0;
    map["Tetrahedron"]  =4;
    map["Cube"] = 6;
    map["Octahedron"] = 8;
    map["Dodecahedron"] = 12;
    map["Icosahedron"] =20;
    while (m--){
        string s ;
        cin >> s ;
        res += map[s];
    }
    cout << res; 
    
    
}


