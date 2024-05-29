// 2739. 구구단
// https://www.acmicpc.net/problem/2739

#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    
    cin >> N;

    if (N >=1 && N <=9)
    {
        for (int i = 1; i<= 9; ++i)
        {
            cout << N  << " * " << i << " = " << N * i << endl;
        }
    }

    return 0;
}