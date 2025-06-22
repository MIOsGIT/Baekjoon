#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <queue>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        q.push(i);
    }

    while (q.size() > 1) {
        q.pop(); // 맨 위 카드 버림
        q.push(q.front()); // 그 다음 카드 맨 아래로
        q.pop(); // 맨 위 제거 (위에서 복사한 거니까)
    }

    cout << q.front() << '\n';

}