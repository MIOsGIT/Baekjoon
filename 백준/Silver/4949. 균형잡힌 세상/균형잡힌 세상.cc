#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string& line) {
    stack<char> st;

    for (char ch : line) {
        if (ch == '(' || ch == '[') {
            st.push(ch);
        } else if (ch == ')') {
            if (st.empty() || st.top() != '(') return false;
            st.pop();
        } else if (ch == ']') {
            if (st.empty() || st.top() != '[') return false;
            st.pop();
        }
        // 다른 문자들은 무시
    }

    return st.empty(); // 모두 짝지어졌는지 확인
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string line;
    while (true) {
        getline(cin, line); // 한 줄 전체 입력 받기
        if (line == ".") break;

        if (isBalanced(line)) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
