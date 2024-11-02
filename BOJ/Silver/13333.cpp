// 13333. Q_인덱스
// https://www.acmicpc.net/problem/13333

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    sort(vec.rbegin(), vec.rend());

    int q_index = 0;

    for (int k = 1; k <= n; k++)
    {
        if (vec[k - 1] >= k)
        {
            q_index = k;
        }
        else
        {
            break;
        }
    }

    cout << q_index << '\n';

    return 0;
}
