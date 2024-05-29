// 10950. A + B - 3
// https://www.acmicpc.net/problem/10950

#include <iostream>

using namespace std;

int main()
{
    int T = 0;
    int i = 0;

    cin >> T;

    while(i < T)
    {
        int A, B = 0;
        cin >> A >> B;

        cout << A + B << endl;

        i++;
    }

    return 0;
}


/* 
int main()
{
    int T = 0;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int A, B = 0;

        cin >> A >> B;

        cout << A + B << endl;
    }

    return 0;
}
 */