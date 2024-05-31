// 2920. 음계
// https://www.acmicpc.net/problem/2920

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number[8] = {};
    int num_size = sizeof(number) / sizeof(number[0]);
    int ascending = 0;
    int descending = 0;
    string s;

    for (int i = 0; i < num_size; i ++)
    {
        cin >> number[i];
    }

    for (int i = 0; i < num_size; i++)
    {
        if (number[i] == i+1)
        {
            ascending++;
        }
        else if(number[i] == 8-i)
        {
            descending++;
        }
    }

    if (ascending == 8)
    {
        s = "ascending";
    }
    else if (descending == 8)
    {
        s = "descending";
    }
    else
    {
        s = "mixed";
    }

    cout << s << endl;

    return 0;
}