#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 7;
int main(){
	int a, b;
	cin >> a >> b;
	vector<int> p(MAXN, -1);
	p[a] = 0;
	queue<int> q;
	q.push(a);
	while(!q.empty()){
		int x = q.front();
		q.pop();
		if(x == b){
			break;
		}
		if(x * 2 <= MAXN && p[x * 2] == -1){
			p[x * 2] = x;
			q.push(x * 2);
		}
		if(x - 1 > 0 && p[x - 1] == -1){
			p[x - 1] = x;
			q.push(x - 1);
		}
	}
	vector<int> pth;
	for(int i = b; i != 0; i = p[i]){
		pth.push_back(i);
	}
	cout << pth.size() - 1 << '\n';
	reverse(pth.begin(), pth.end());
	for(int i = 1; i < pth.size(); i++){
		cout << pth[i] << ' ';
	}
}
