#include <bits/stdc++.h>
using namespace std;
void qsort(vector<int>&a, int l, int r){
	int i = l, j = r;
	int x = a[(l + r) / 2];
	while(i < j){
		while(a[i] < x){
			i++;
		}
		while(x < a[j]){
			j--;
		}
		if(i <= j){
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if(j > l){
		qsort(a, l, j);
	}
	if(i < r){
		qsort(a, i, r);
	}
}
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	qsort(a, 0, n - 1);
	int minn = INT_MAX;
	for(int i = 0; i < n - 1; i++){
		minn = min(minn, a[i + 1] - a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		if(a[i + 1] - a[i] == minn){
			cout << a[i] << ' ' << a[i + 1] << ' ';
		}
	}
	cout << '\n';
}
