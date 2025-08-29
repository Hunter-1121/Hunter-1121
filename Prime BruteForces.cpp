// brute forces algorithm
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define elif else if

signed main(){
    fastio
    int n;
    cin >> n;
    bool prime = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime = false;
            break;
        }
    }
    if(prime) cout << "Ini adalah bilangan prima";
    else cout << "Ini bukan bilangan prima";
}