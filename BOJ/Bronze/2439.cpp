// 2439. 별 찍기 - 2
// https://www.acmicpc.net/problem/2439

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}