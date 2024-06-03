// 3003. 킹, 퀸, 룩, 비숍, 나이트, 폰
// https://www.acmicpc.net/problem/3003

#include <iostream>

using namespace std;

int main()
{
    int chess[6] = { 1, 1, 2, 2, 2, 8 };
    int chess_size = sizeof(chess) / sizeof(chess[0]);

    int n;

    for(int i = 0; i < chess_size; i++)
    {
        cin >> n;

        cout << chess[i] - n << " ";
    }
}