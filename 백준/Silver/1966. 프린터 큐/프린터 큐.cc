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

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        queue<pair<int, int>> q;
        int cnt[10] = {};  // 중요도별 문서 개수 (1~9)

        for (int i = 0; i < n; ++i) {
            int p;
            cin >> p;
            q.push({ i, p });
            cnt[p]++;
        }

        int printed = 0;

        while (!q.empty()) {
            auto cur = q.front(); q.pop();

            bool higher = false;
            for (int i = cur.second + 1; i <= 9; ++i) {
                if (cnt[i] > 0) {
                    higher = true;
                    break;
                }
            }

            if (higher) {
                q.push(cur);
            }
            else {
                printed++;
                cnt[cur.second]--;
                if (cur.first == m) {
                    cout << printed << '\n';
                    break;
                }
            }
        }
    }

}