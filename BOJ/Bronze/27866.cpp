// 27866. 문자와 문자열
// https://www.acmicpc.net/problem/27866
#include <iostream>

using namespace std;

int main()
{
    string S;
    int i;

    cin >> S;
    cin >> i;

    cout << S[i - 1] << endl;

    cout << fixed;
    cout.precision(2);
    cout << 1.23 << endl;
    cout << 4.0 << endl;
    cout << 4 << endl;

    return 0;
}