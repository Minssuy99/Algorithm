#include <bits/stdc++.h>

using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

void print(vector<int> vec)
{
    for (int i : vec)
        cout << i << " ";
    cout << '\n';
}

void combination(int start, vector<int> vec)
{
    if (vec.size() == k) // 기저사례
    {
        print(vec);
        return;
    }
    for (int i = start + 1; i < n; i++)
    {
        vec.push_back(i);
        combination(i, vec);
        vec.pop_back(); // 원복
    }
    return;
}

int main()
{
    vector<int> vec;
    combination(-1, vec);
    return 0;
}