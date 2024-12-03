// 30468. 호반우가 학교에 지각한 이유 1
// https://www.acmicpc.net/problem/30468

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int STR, DEX, INT, LUK, n;
    cin >> STR >> DEX >> INT >> LUK >> n;

    int count = 0;
    int total = STR + DEX + INT + LUK;

    while (total < n * 4)
    {
        count++;
        total++;
    }

    cout << count;

    return 0;
}
