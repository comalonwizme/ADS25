#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	while(q--){
		int l1, r1, l2, r2;
		int L1, R1, L2, R2;
		cin >> l1 >> r1 >> l2 >> r2;
		int l = 0, r = n, cnt = 0;
		while(r > l){
			int mid = (l + r) / 2;
			if(a[mid] > r1){
				r = mid;
			}
			else{
				l = mid + 1;
			}
		}
		R1 = l;
		l = 0, r = n;
		while(r > l){
			int mid = (r + l) / 2;
			if(a[mid] >= l1){
				r = mid;
			}
			else{
				l = mid + 1;
			}
		}
		L1 = l;
		l = 0, r = n;
		while(r > l){
			int mid = (l + r) / 2;
			if(a[mid] <= r2){
				l = mid + 1;
			}
			else{
				r = mid;
			}
		}
		R2 = l;
		l = 0, r = n;
		while(r > l){
			int mid = (l + r) / 2;
			if(a[mid] >= l2){
				r = mid;
			}
			else{
				l = mid + 1;
			}
		}
		L2 = l;
		cout << (R1 - L1) + (R2 - L2) - max(0, min(R1, R2) - max(L1, L2)) << '\n';
	}
}
