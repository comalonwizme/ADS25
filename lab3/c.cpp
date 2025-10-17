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
		cin >> l1 >> r1 >> l2 >> r2;
		auto x1 = lower_bound(a, a + n, l1) - a;
		auto x2 = upper_bound(a, a + n, r1) - a;
		
		auto q1 = lower_bound(a, a + n, l2) - a;
		auto q2 = upper_bound(a, a + n, r2) - a;
		
		int qq = min(x2, q2) - max(x1, q1);
		cout << (x2 - x1) + (q2 - q1) - max(0, qq) << '\n';
	}
}
