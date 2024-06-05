// 26545. Mathmatics
// https://www.acmicpc.net/problem/26545

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    int result = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        result += n;
    }

    cout << result << endl;

    return 0;
}