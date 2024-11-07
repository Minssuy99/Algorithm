// 1748. 수 이어쓰기 1
// https://www.acmicpc.net/problem/1748

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;

    for (int i = 1; i <= n; i *= 10)
    {
        ans += n - i + 1;
    }

    cout << ans;
    return 0;
}