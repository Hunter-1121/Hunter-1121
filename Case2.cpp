//Page 49 - 50
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
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n - j - 1; i++){
            if(a[i] > a[i + 1]){
                swap(a[i], a[i + 1]);
            }
        }
    }

    for(auto x : a){
        cout << x << ' ';
    }

}

