// 2309. 일곱 난쟁이
// https://www.acmicpc.net/problem/2309

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;

    for (int i = 0; i < 9; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    do
    {
        int sum = 0;

        for (int i = 0; i < 7; i++)
        {
            sum += vec[i];
        }

        if (sum == 100)
            break;

    } while (next_permutation(vec.begin(), vec.end()));

    return 0;
}