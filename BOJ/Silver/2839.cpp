// 2839. 설탕 배달
// https://www.acmicpc.net/problem/2839

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int result = 0;
    int kg3 = 0;
    int kg5 = 0;

    while (true)
    {
        if (n % 5 == 0)
        {
            result = (n / 5) + kg3;
            cout << result << '\n';
            break;
        }
        if (n < 3)
        {
            cout << -1;
            return 0;
        }
        n -= 3;
        kg3++;
    }

    return 0;
}