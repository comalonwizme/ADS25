#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
int main(){
	int n, x;
	cin >> n;
	Node* st = nullptr;
	Node* fh = nullptr;
	for(int i = 0; i < n; i++){
		cin >> x;
		Node* dt = new Node{x, nullptr};
		if(st == nullptr){
			st = dt;
			fh = dt;
		}
		else{
			fh -> next = dt;
			fh = dt;
		}
	}
	cin >> x;
	int ans = 0, minn = 1e9, i = 0;
	Node* curr = st;
	while(curr != nullptr && i < n){
		if(abs((curr->data) - x) < minn){
			minn = abs((curr->data) - x);
			ans = i;
		}
		curr = curr -> next;
		i++;
	}
	cout << ans << '\n';
}
