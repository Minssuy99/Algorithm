// 2164. 카드2
// https://www.acmicpc.net/problem/2164

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    while (true)
    {
        if (q.size() == 1)
        {
            break;
        }

        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front() << '\n';

    return 0;
}