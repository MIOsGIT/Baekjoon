#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	stack <int> st;
	int n, ord, x;
	cin >> n;
	while (n--) {
		cin >> ord;
		if (ord == 1) {
			cin >> x;
			st.push(x);
		}
		else if (ord == 2) {
			if (st.empty()) cout << -1 << '\n';
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (ord == 3) cout << st.size() << '\n';
		else if (ord == 4) cout << st.empty() << '\n';
		else if (ord == 5) {
			if (st.empty()) cout << -1 << '\n';
			else cout << st.top() << '\n';
		}
	}
}