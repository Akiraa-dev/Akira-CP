// author:  akira (a.k.a Tran Gia Huy)
#include "bits/stdc++.h"
using namespace std;

/** --------MACROS-------- **/
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;

/** --------BASIC FUNCTIONS-------- **/
[[maybe_unused]] ll binpow(ll a, ll n) { int res = 1; while(n) { if(n & 1) {res *= a;} a *= a; n >>= 1; } return res; }
[[maybe_unused]] ll gcd(ll a, ll b) { if(b == 0) return a; return gcd(b, a % b); }
[[maybe_unused]] ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

/** --------PROBLEM SOLVING-------- **/
int n, m;
vector<int> adj[100001];
bool vis[100001] = {false};

void dfs(int u) {
    cout << u << " ";
    vis[u] = true;
//    for (int i = 0; i < sz(adj[u]); i++) {
//        if(!vis[adj[u][i]]) {
//            dfs(adj[u][i]);
//        }
//    }
    for (int i : adj[u]) {
        if(!vis[i]) {
            dfs(i);
        }
    }
}
void solve() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
}



/** ------------------------------
Input
9 9
1 2
1 3
1 5
2 4
3 6
3 7
3 9
5 8
8 9
    -------------------------- **/

/** --------MAIN FUNCTION-------- **/
int main() {
    fastIO
//	freopen("test.INP", "r", stdin);
//	freopen("test.OUT", "w", stdout);
	int t = 1;
	while(t--) solve();
	return 0;
}