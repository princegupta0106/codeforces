#include <bits/stdc++.h>
using namespace std;

int main() {
    int res = 0;
    int m= 0;
    cin >> m;
    int temp  = m;
   
    int minimum = 7989889; 
    int maxi  = 0; 
    int mini = 0; 
    int maximum = -9;
    vector <int> height;
    while(temp--){
        int temp  = 0;
        cin >> temp; 
        height.push_back(temp ); 
    }
    
    for (int i = 0 ; i < m ; i++ ){
        if( height[i] > maximum){
            maximum = height[i]; 
            maxi = i ;
        }
        if( height[i] <= minimum){
            minimum = height[i]; 
            mini = i ;
        }
    }
    if (mini < maxi){
        res -= 1;
    }
    res += maxi; 
    res += (height.size() -1 -mini);

    cout << res;
    
}


