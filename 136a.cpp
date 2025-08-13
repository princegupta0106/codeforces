#include <bits/stdc++.h>
using namespace std;

int main() {
    int res = 0;
    int m= 0;
    cin >> m;

    vector< int> vec(m ) ;
    int i = 0; 
    while (m --){
        int temp = 0 ;
        cin >> temp; 
        vec[temp-1]  = i +1;
        i++;
    }
    for (int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << " ";
    }
}


