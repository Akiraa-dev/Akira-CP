/**
 *    author:  akira
 *    created: 30/05/2023 18:03:38
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

// Problem E
#define all(x) x.begin(), x.end()

int cnt[3000001];
void solve() {
    ll n; cin >> n;
    ll res = 0;
    memset(cnt, 0, sizeof(cnt));
    vector<int> a(n);
    vector<int> b;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ++cnt[a[i]];
    }
    set<ll> s(all(a));
    b.assign(all(s));
    for(int i = 0; i < b.size(); i++) {
        if(b[i] == cnt[b[i]]) {
            ++res;
        }
        else res += (cnt[b[i]] / b[i]);
    
    }
    cout << res;
}
int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("clan.INP", "r", stdin);
    // freopen("clan.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}