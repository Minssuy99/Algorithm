// 11279. 최대힙
// https://www.acmicpc.net/problem/11279

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<int> pq;

    int n;

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