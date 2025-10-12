#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<pair<int,int>,int>& l, const pair<pair<int,int>,int>& r){
	if(l.second != r.second){
		return l.second < r.second;
	}
	if(l.first.second != r.first.second){
		return l.first.second < r.first.second;
	}
	return l.first.first < r.first.first;
}
void qsd(vector<pair<pair<int, int>, int>> &a, int l, int r){
	int i = l, j = r;
	auto x = a[(r + l) / 2];
	while(i < j){
		while(cmp(a[i], x)){
			i++;
		}
		while(cmp(x, a[j])){
			j--;
		}
		if(i <= j){
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if(l < j){
		qsd(a, l, j);
	}
	if(r > i){
		qsd(a, i, r);
	}
}
int main(){
	int n;
	cin >> n;
	vector<pair<pair<int, int>, int>> a(n);
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		int d = stoi(s.substr(0, 2));
		int m = stoi(s.substr(3, 2));
		int y = stoi(s.substr(6, 4));
		a[i].first.first = d;
		a[i].first.second = m;
		a[i].second = y;
	}
	qsd(a, 0, n - 1);
	for(int i = 0; i < n; i++){
		if(a[i].first.first < 10){
			cout << '0' << a[i].first.first << '-';;
		}
		else{
			cout << a[i].first.first << '-';
		}
		if(a[i].first.second < 10){
			cout << '0' << a[i].first.second << '-';
		}
		else{
			cout << a[i].first.second << '-';
		}
		cout << a[i].second << '\n';
	}
}
