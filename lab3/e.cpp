#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	vector<long long> s;
	for(int i = 0; i < n; i++){
		long long x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		s.push_back(max(x2, y2));
	}
	sort(s.begin(), s.end());
	cout << s[k - 1] << '\n';
}
