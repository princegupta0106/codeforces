#include <bits/stdc++.h>
using namespace std;

int main() {
    int t= 0;
    cin >> t; 
    while (t --){
        int num = 0;
        cin >> num;
        int temp =1 ;
        int digit = 0;
        vector <int> vec ;
        while (num >0){
            digit = num%10;
            digit*= temp;
            if (digit){
                vec.push_back(digit);
            }
            temp *= 10;
            num /= 10; 
        }
        cout << vec.size() << "\n";
        for (auto & x:vec){
            cout << x << " ";
        }
        cout << "\n";
        
        
    }
}


