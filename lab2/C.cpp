#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node (int x) : data(x), next(nullptr) {}
};
int main(){
	int n, x;
	cin >> n;
	Node *st = nullptr;
	Node *fsh = nullptr;
	for(int i = 0; i < n; i++){
		cin >> x;
		Node *dt = new Node(x);
		if(st == nullptr){
			st = dt;
			fsh = dt;
		}
		else{
			fsh -> next = dt;
			fsh = dt;
		}
	}
	bool ok = true;
	Node *curr = st;
	while(curr != nullptr){
		if(ok){
			ok = false;
			cout << curr -> data << ' ';
		}
		else{
			ok = true;
		}
		curr = curr -> next;
	}
}
