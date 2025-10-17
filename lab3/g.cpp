#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 7;
int a[MAXN], n, f;
bool ok(int x){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cnt += (a[i] + x - 1) / x;
		if (cnt > f){
			return false;
		}
	}
	return cnt <= f;
}
int main(){
	cin >> n >> f;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int l = 1, r = MAXN;
	while(r > l){
		int mid = (r + l) / 2;
		if(ok(mid)){
			r = mid;
		}
		else{
			l = mid + 1;
		}
	}
	cout << l << '\n';
}
