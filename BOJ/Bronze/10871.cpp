// 10871. X보다 작은 수
// https://www.acmicpc.net/problem/10871

#include <iostream>

using namespace std;

int main()

{
    int N, X;

    cin >> N >> X;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; ++i)
    {
        if (arr[i] < X)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}