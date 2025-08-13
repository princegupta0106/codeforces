#include <bits/stdc++.h>
using namespace std;

int main() {
    int res = 0;
    long long int m= 0;
    cin >> m;
    int count  = 0;
    while(m > 0 ){
        if((m%10 == 4 || m%10 == 7)) {
            
            count ++ ;
           
        }
        m /= 10;
        
    }
    if (count == 4 || count  == 7){
        cout << "YES";
    }
    else {
        cout << "NO"; 
    }
    
}


