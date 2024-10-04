/// 25314. 코딩은 체육과목 입니다
// https://www.acmicpc.net/problem/

#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    if(N % 4 == 0)
    {
        int divide = N / 4;

        for(int i = 0; i < divide; i++)
        {
            cout << "long ";
        }
        cout << "int";
    }


    return 0;
}