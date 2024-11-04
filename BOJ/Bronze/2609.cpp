// 2609. 최대공약수와 최소공배수
// https://www.acmicpc.net/problem/2609

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;

    cin >> a >> b;

    cout << gcd(a, b) << '\n';
    cout << lcm(a, b) << '\n';

    return 0;
}

/* 최대공약수 직접 구현해보기  */
/*

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

*/

/* 최소공배수 구하는법 */
/*
    두 수의 곱 / 최대공약수
    a * b / gcd
*/