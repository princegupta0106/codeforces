#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t; 
    cin >> t ; 
    while (t--){
       int n , m ; 
       cin >> n >> m ; 
       vector <int> infected(m);
       vector <int> gaps(m); 
       for (int i = 0 ; i < m;  i++){
           cin >> infected[i] ;
       }
       sort(infected.begin(), infected.end());
       for (int i = 0 ; i < m-1 ; i++){
           gaps[i] = infected[i+1]- infected[i]-1 ;
       }
       
       
       gaps.back() = n - infected.back()+infected[0] -1; 
       sort(gaps.rbegin(), gaps.rend()); 
  
       int saved = 0 ; 
       int days_passed = 0 ; 
       for (int i = 0 ;i < m ; i ++){
           int curGap =gaps[i] - 2*days_passed; 
           if (curGap >0){
               saved +=1 ;
              
               if (curGap -2 >0){
                   saved += curGap-2; 
                   
               }
               days_passed +=2 ; 
           }
           
           
       }
       cout << n-saved << "\n"; 
    }
    return 0;
}