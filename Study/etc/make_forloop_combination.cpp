#include <bits/stdc++.h>
using namespace std;

int n = 5;
int k = 3;
int a[5] = {1, 2, 3, 4, 5};

int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                cout << i << " " << j << " " << k << '\n';
            }
        }
    }
    return 0;
}
/*
0 1 2
0 1 3
0 1 4
0 2 3
0 2 4
0 3 4
1 2 3
1 2 4
1 3 4
2 3 4
*/