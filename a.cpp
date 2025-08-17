#include <bits/stdc++.h>
using namespace std;
int main (){
    int t  ; 
    while (t--){
        int input  ;
        vector <int> balls;
        cin >> input ; 
        if (input == 1){
            int a ;
            cin >> a ;
            balls.push_back(a) ;
        }
        else {
            sort(balls.begin() , balls.end() , greater<int>()); 
            cout << balls[balls.size() -1]; 
            balls.pop_back();
        }
    }

    return 0 ; 
}