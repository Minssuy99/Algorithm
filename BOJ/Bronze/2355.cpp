// 2355. 시그마
// https://www.acmicpc.net/problem/2355

#include <iostream>

using namespace std;

int main()
{
    long long a, b;

    cin >> a >> b;

    if (a > b)
    {
        swap(a, b);
    }

    long long result = (b - a + 1) * (b + a) / 2;

    cout << result << "\n";
    
    return 0;
}