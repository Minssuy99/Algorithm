#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void makePermutation(int n, int r, int depth, vector<int> &vec)
{
    if (r == depth)
    {
        print(vec);
        return;
    }

    for (int i = depth; i < n; i++)
    {
        cout << i << " : " << depth << " changed\n";
        swap(vec[i], vec[depth]);
        makePermutation(n, r, depth + 1, vec);
        cout << i << " : " << depth << " re changed\n";
        swap(vec[i], vec[depth]);
    }
    return;
}

int main()
{
    vector<int> vec = {1, 2, 3};
    makePermutation(3, 3, 0, vec);

    return 0;
}

/*
0 : 0 changed
1 : 1 changed
2 : 2 changed
1 2 3
2 : 2 re changed
1 : 1 re changed
2 : 1 changed
2 : 2 changed
1 3 2
2 : 2 re changed
2 : 1 re changed
0 : 0 re changed
1 : 0 changed
1 : 1 changed
2 : 2 changed
2 1 3
2 : 2 re changed
1 : 1 re changed
2 : 1 changed
2 : 2 changed
2 3 1
2 : 2 re changed
2 : 1 re changed
1 : 0 re changed
2 : 0 changed
1 : 1 changed
2 : 2 changed
3 2 1
2 : 2 re changed
1 : 1 re changed
2 : 1 changed
2 : 2 changed
3 1 2
2 : 2 re changed
2 : 1 re changed
2 : 0 re changed

*/