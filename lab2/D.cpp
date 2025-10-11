#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int a[1001] = {}, maxx = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a[x]++;
		maxx = max(maxx, a[x]);
	}
	for(int i = 1000; i > 0; i--){
		if(a[i] == maxx){
			cout << i << ' ';
		}
	}
	cout << '\n';
}
