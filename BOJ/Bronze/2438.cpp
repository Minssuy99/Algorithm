// 2438. 별 찍기 - 1
// https://www.acmicpc.net/problem/2438

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 1; i <=N; ++i)
    {
        for (int y = 1; y <= i; ++y)
        {
             cout << "*";
        }
        cout << endl;
    }
}