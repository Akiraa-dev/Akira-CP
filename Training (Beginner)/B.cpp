/**
 *    author:  akira
 *    created: 30/05/2023 23:49:26
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;

// Problem B
void solve() {
    ll n; cin >> n;
    ll cnt = 0;
    for(ll i = 1; i <= n; i++) {
        if(n % i == 0) ++cnt;
    }
    cout << cnt;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("B.INP", "r", stdin);
    freopen("B.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}