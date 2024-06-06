// 8393. 합
// https://www.acmicpc.net/problem/8393

#include <iostream>

using namespace std;

int main()
{
    int n;
    int result = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    cout << result << endl;
    
    return 0;
}