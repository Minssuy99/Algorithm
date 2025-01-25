#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

void printV(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << '\n';
}

void makePermutation(int n, int r, int depth)
{
    cout << n << " : " << r << " : " << depth << '\n';
    if (r == depth)
    {
        printV(vec);
        return;
    }
    for (int i = depth; i < n; i++)
    {
        swap(vec[i], vec[depth]);
        makePermutation(n, r, depth + 1);
        swap(vec[i], vec[depth]);
    }
}

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        vec.push_back(i);
    }
    makePermutation(3, 3, 0);
    return 0;
}