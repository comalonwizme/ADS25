#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 7;
bool was[MAXN];
int maxx;
vector<vector<int>> g(MAXN);
void dfs(int v, int p, int ch){
	was[v] = true;
	int child = (int)g[v].size();
	if(p != -1){
		child -= 1;
	}
	if(p == -1){
		maxx++;
	}
	else{
		if(child > ch){
			maxx++;
		}
	}
	for(int i = 0; i < g[v].size(); i++){
		if(g[v][i] == p){
			continue;
		}
		if(was[g[v][i]] == false){
			dfs(g[v][i], v, child);
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int sn[n + 1] = {};
	for(int i = 1; i <= n; i++){
		if(sn[i]){
			continue;
		}
		queue<int> q;
		q.push(i);
		sn[i] = 1;
		int rt = i;
		vector<int> comp;
		while (!q.empty()){
			int v = q.front(); q.pop();
			comp.push_back(v);
			if(v < rt) rt = v;
			for(int u : g[v]){
				if(!sn[u]){
					sn[u] = 1;
					q.push(u);
				}
        	}
    	}
    	dfs(rt, -1, -1);
	}
	cout << maxx << ' ';
}
