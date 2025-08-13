#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t; 
    cin >> t;
    vector <int> digits ;
    
    while( t >0 ){
        digits.push_back(t %10);
        t /=10;
        
    }
    for (int i =0 ; i < digits.size()-1 ; i++){
        if (digits[i] >4){
            digits[i] = 9-digits[i];
        }
    }
    if (digits[digits.size() -1] > 4 &&digits[digits.size() -1] < 9){
        digits[digits.size() -1] = 9-digits[digits.size() -1];
    }
    for (int i = digits.size() -1 ; i >=0; i--){
        cout << digits[i];
    }
    
    }

