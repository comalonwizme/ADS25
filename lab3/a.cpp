#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node (int x) : data(x), next(NULL) {}
};
int main(){
	int n, x;
	cin >> n;
	Node *start = NULL;
	Node *fsh = NULL;
	for(int i = 0; i < n; i++){
		cin >> x;
		Node *dt = new Node(x);
		if(start == NULL){
			start = dt;
			fsh = dt;
		}
		else{
			fsh -> next = dt;
			fsh = dt;
		}
	}
	int y;
	cin >> x >> y;
	int m = x * y;
	vector<int> v(m);
	for(int i = 0; i < m; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	Node *curr = start;
	while(curr != NULL){
		int l = -1, r = m;
		while(r > l + 1){
			int mid = (r + l) / 2;
			if(v[mid] <= curr -> data){
				r = mid;
			}
			else{
				l = mid;
			}
		}
		if(v[r] == curr -> data){
			int q = (r + y) / y;
			if(q % 2 == 0){
				cout << q - 1 << ' ' << y - (r % y) - 1 << '\n';
			}
			else{
				cout << q - 1 << ' ' << r % y << '\n';
			}
		}
		else{
			cout << -1 << '\n';
		}
		curr = curr -> next;
	}
}
