#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define elif else if

int main(){
    fastio
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int free_idx = n;
    for(int i = 0; i < n; i++){
        int idxmin = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[idxmin]){
                idxmin = j;
            }
        }
        if(idxmin != i){
            a[free_idx] = a[i];
            a[i] = a[idxmin];
            a[idxmin] = a[free_idx];
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
