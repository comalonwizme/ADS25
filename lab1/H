#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 7;
bool ok[MAXN];
int n;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ok[0] = ok[1] = true;
	for(int i = 2; i * i < MAXN; i++){
		if(!ok[i]){
			for(int j = i * i; j < MAXN; j += i){
				ok[j] = true;
			}
		}
	}
	cin >> n;
	if(ok[n]){
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
}
