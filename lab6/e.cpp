#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 7;
void qsort(vector<int> &a, int l, int r){
	int i = l, j = r;
	int x = a[(l + r) / 2];
	while(i < j){
		while(a[i] > x){
			i++;
		}
		while(a[j] < x){
			j--;
		}
		if(i <= j){
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if(i < r){
		qsort(a, i, r);
	}
	if(l < j){
		qsort(a, l, j);
	}
}
int main(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	vector<int> v(n);
	int ans[n][m];
	for(int j = 0; j < m; j++){
		for(int i = 0; i < n; i++){
			v[i] = a[i][j];
		}
		qsort(v, 0, n - 1);
		for(int i = 0; i < n; i++){
			ans[i][j] = v[i];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}
}
