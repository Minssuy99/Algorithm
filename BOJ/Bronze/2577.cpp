// 2577. 숫자의 개수
// https://www.acmicpc.net/problem/2577

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    int result = 1;
    int numbers[10] = {};
    int numbers_size = sizeof(numbers) / sizeof(numbers[0]);


    for (int i = 0; i < 3; i++)
    {
        cin >> a;

        result *= a;
    }

    string s = to_string(result);

    for (int i = 0; i < s.length(); i++)
    {
        int realnum = s[i] - '0';
        numbers[realnum]++;
    }

    for (int i = 0; i < numbers_size; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}