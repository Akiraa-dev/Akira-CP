// author : akira
#include <bits/stdc++.h>
using namespace std;

#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
int n, m;
vector<int> adj[1001];
bool visited[1001] = {false};
void input() {
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
}
void bfs(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : adj[v]) {
            if(!visited[x]) {
                q.push(x);
                visited[x] = true;
            }
        }
	}
}
int main() {
	akira
	input();
	bfs(1);
	return 0;
}