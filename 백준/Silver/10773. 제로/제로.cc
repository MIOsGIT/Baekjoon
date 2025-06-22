#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	stack <int> st;
	int k, n;
	cin >> k;
	while (k--) {
		cin >> n;
		if (n != 0) st.push(n);
		else st.pop();
	}
	int t = st.size();
	long int sum = 0;
	while (t--) {
		sum += st.top();
		st.pop();
	}
	cout << sum << endl;
}