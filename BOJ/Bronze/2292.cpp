#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n;
    int count = 1; // 기본적으로 첫 번째 방은 1층
    int range = 1; // 벌집 범위 (1, 7, 19, ...)

    cin >> n;

    if (n == 1) // 첫 번째 방일 경우 1 출력 후 종료
    {
        cout << "1" << '\n';
        return 0;
    }

    while (range < n)
    {
        range += 6 * count; // 각 층에서 방 수가 6씩 증가
        count++;
    }

    cout << count << '\n';

    return 0;
}