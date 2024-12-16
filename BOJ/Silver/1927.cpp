// 1927. 최소 힙
// https://www.acmicpc.net/problem/1927

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;

        cin >> number;

        if (number == 0)
        {
            if (pq.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
        {
            pq.push(number);
        }
    }

    return 0;
}