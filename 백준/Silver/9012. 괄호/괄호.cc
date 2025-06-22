#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <stdio.h>
#include <string>
using namespace std;

bool is(const string& s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            if (st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        if (is(str)) cout << "YES\n";
        else cout << "NO\n";
    }
	
}