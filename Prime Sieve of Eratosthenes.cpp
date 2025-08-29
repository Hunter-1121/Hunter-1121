#include <bits/stdc++.h>
using namespace std;
#define int long long //int
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define elif else if

signed main(){
    fastio
    int n;
    cin >> n;
    vector<bool> a(n + 1, true);
    a[0] = a[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (a[i]) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = false;
            }
        }
    }
    if(a[n]) cout << "Ini bilangan prima";
    else cout << "Ini bukan bilangan prima";
}