// 15964. 이상한 기호
// https://www.acmicpc.net/problem/15964

#include <iostream>

using namespace std;

void calculate(long long A, long long B)
{
    long long result = (A + B) * (A - B);

    cout << result << endl;
}

int main()
{
    long long A, B;

    cin >> A >> B;

    calculate(A, B);

    return 0;
}