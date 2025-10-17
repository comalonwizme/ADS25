#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x;
	cin >> x;
	int l = -1, r = n;
	while(r > l + 1){
		int mid = l + (r - l) / 2;
		if(a[mid] >= x){
			r = mid;
		}
		else{
			l = mid;
		}
	}
	if(a[r] == x){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
}
