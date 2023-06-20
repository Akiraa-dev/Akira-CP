/**
 *    author:  akira
 *    created: 31/05/2023 16:02:36
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

// Problem C
void solve() {
    ll n; cin >> n;
    ll ans = 1;
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            ans *= i;
        }
        while(n % i == 0) n /= i;

    }
    if(n > 1) ans *= n;
    cout << ans;
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("C.INP", "r", stdin);
    // freopen("C.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}