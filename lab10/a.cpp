#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m)), dist(n, vector<int>(m, -1));
	queue<pair<int, int>> q;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			if(a[i][j] == 2){
				q.push({i, j});
				dist[i][j] = 0;
			}
		}
	}
	int ans = 0;
	const int dx[4] = {-1, 1, 0, 0};
	const int dy[4] = {0, 0, 1, -1};
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();
		int x = p.first, y = p.second;
		for(int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || nx >= n || ny < 0 || ny >= m){
				continue;
			}
			if(a[nx][ny] == 1 && dist[nx][ny] == -1){
				a[nx][ny] = 2;
				dist[nx][ny] = dist[x][y] + 1;
				q.push({nx, ny});
				ans = max(ans, dist[nx][ny]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 1){
				cout << -1 << '\n';
				return 0;
			}
		}
	}
	cout << ans << '\n';
}
