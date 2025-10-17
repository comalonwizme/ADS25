#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int pref[n + 1] = {};
	for(int i = 1; i <= n; i++){
		pref[i] = pref[i - 1] + a[i];
//		cout << pref[i] << ' ';
	}
	int q, x;
	cin >> q;
	while(q--){
		cin >> x;
		int l = 1, r = n + 1;
		while(r > l){
			int mid = l + (r - l) / 2;
			if(a[mid] > x){
				r = mid;
			}
			else{
				l = mid + 1;
			}
		}
		cout << l - 1 << " " << pref[l - 1] << '\n';
	}
}
