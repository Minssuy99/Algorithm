// 10872. 팩토리얼
// https://www.acmicpc.net/problem/10872

#include <iostream>

using namespace std;

int main()

{
    int N = 0;
    int value = 1;

    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        value *= i;
    }

    cout << value << endl;
    
    return 0;
}