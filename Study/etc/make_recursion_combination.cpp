#include <bits/stdc++.h>

using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

void print(vector<int> b)
{
    for (int i : b)
        cout << i << " ";
    cout << '\n';
}

void combination(int start, vector<int> b)
{
    if (b.size() == k) // 기저사례
    {
        print(b);
        return;
    }
    for (int i = start + 1; i < n; i++)
    {
        b.push_back(i);
        combination(i, b);
        b.pop_back(); // 원복
    }
    return;
}

int main()
{
    vector<int> b;
    combination(-1, b);
    return 0;
}