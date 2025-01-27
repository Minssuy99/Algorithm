#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[] = {1, 2, 3};
    do
    {
        for (int i : a)
            cout << i << " ";
        cout << '\n';
    } while (next_permutation(a, a + 3));

    vector<int> vec = {1, 2, 3};
    do
    {
        for (int i : a)
            cout << i << " ";
        cout << '\n';
    } while (next_permutation(vec.begin(), vec.end()));

    /*     vector<int> vec2 = {2, 1, 3, 100, 200};

        sort(vec2.begin(), vec2.end());
        do
        {
            for (int i = 0; i < 2; i++)
            {
                {
                    cout << vec2[i] << " ";
                }
            }
            cout << '\n';
        } while (next_permutation(vec2.begin(), vec2.end())); */
}