#include <bits/stdc++.h>
using namespace std;
int main(){
	deque<int> n, b;
	int x;
	for(int i = 0; i < 5; i++){
		cin >> x;
		b.push_back(x);
	}
	for(int i = 0; i < 5; i++){
		cin >> x;
		n.push_back(x);
	}
	const int MAXN = 1e6;
	int ch = 0;
	while(!b.empty() && !n.empty() && ch < MAXN){
		int nk = n.front(), bk = b.front();
		b.pop_front(); n.pop_front();
		bool nurik;
		if(nk == 0 && bk == 9){
			nurik = true;
		}
		else if(nk == 9 && bk == 0){
			nurik = false;
		}
		else{
			if(nk > bk){
				nurik = true;
			}
			else{
				nurik = false;
			}
		}
		
		if(nurik){
			n.push_back(bk);
			n.push_back(nk);
		}
		else{
			b.push_back(bk);
			b.push_back(nk);
		}
		ch++;
	}
	if(ch >= MAXN){
		cout << "blin nichya";
	}
	else if(n.empty()){
		cout << "Boris " << ch;
	}
	else{
		cout << "Nursik " << ch;
	}
}
