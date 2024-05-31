// 10809. 알파벳 찾기
// https://www.acmicpc.net/problem/10809

#include <iostream>

using namespace std;

int main()
{
    string s;

    int arr[26];

    for (int i = 0; i < 26; i ++)
    {
        arr[i] = -1;
    }

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (arr[s[i] - 'a'] == -1)
        {
            arr[s[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}