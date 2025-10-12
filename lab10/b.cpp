#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, v;
	cin >> n;
	vector<vector<int>> g(n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> v;
			if(v == 1){
				g[i].push_back(j);
			}
		}
	}
	int st, fsh;
	cin >> st >> fsh;
	st--; fsh--;
	queue<int> q;
	q.push(st);
	vector<int> dst(n, -1);
	dst[st] = 0;
	while(!q.empty()){
		v = q.front();
		q.pop();
		for(size_t i = 0; i < g[v].size(); i++){
			int to = g[v][i];
			if(dst[to] == -1){
				q.push(to);
				dst[to] = dst[v] + 1;
			}
		}
	}
	cout << dst[fsh] << '\n';
}
