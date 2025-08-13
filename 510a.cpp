#include <bits/stdc++.h>
using namespace std;

int main() {
    int m= 0,n=0;
    cin >> m;
    cin >> n;
    for(int i = 0 ; i < m ; i ++){
        for (int j = 0 ; j < n ; j++){
            if (!(i%2)){
                cout << "#";
            }
            else{
                if (( (i-1)/2 )%2){
                    if (j==0){
                        cout << "#" ;
                    }
                    else{
                        cout << ".";
                    }
                }
                else{
                    if (j==n-1){
                        cout << "#" ;
                    }
                    else{
                        cout << ".";
                    }
                }
            }
        }
        cout << "\n";
    }
    
}


