#include <bits/stdc++.h>
#define int long long
using namespace std;
int prt(vector<int>&a, int l, int r){
	int piv = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(a[j] <= piv){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}
void qsort(vector<int>& a, int l, int r){
	if(l < r){
		int pi = prt(a, l, r);
		qsort(a, l, pi - 1);
		qsort(a, pi + 1, r);
	}
}
const int MAXN = 1e5;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	int was[MAXN] = {};
	for(int i = 0; i < n; i++){
		cin >> a[i];
		was[a[i]]++;
	}
	qsort(a, 0, n - 1);
//	for(auto x : a){
//		cout << x << ' ';
//	}
	if(n == 0){
		return 0;
	}
	vector<int> ans;
	while(k--){
		int x;
		cin >> x;
		int l = 0, r = n;
		while(r > l){
			int mid = (l + r) / 2;
			if(a[mid] > x){
				r = mid;
			}
			else{
				l = mid + 1;
			}
		}
		if(a[l - 1] == x){
			a[l - 1] = -1;
			ans.push_back(x);
			qsort(a, 0, n - 1);
		}
//		cout << a[l - 1] << ' ';
	}
	qsort(ans, 0, ans.size() - 1);
	for(auto &x : ans){
		cout << x << ' ';
	}
}
