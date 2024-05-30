// 1152. 단어의 개수
// https://www.acmicpc.net/problem/1152

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    int word = 1;

    getline(cin, s);

    for(int i =0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
                word++;
        }
    }

    if (s[0] == ' ')    // 문자열의 첫자리가 공백이라면
    {
        word--;
    }

    if (s[s.length() -1] == ' ')    // 문자열의 마지막 자리가 공백이라면
    {
        word--;
    }

    if (s[0] == ' ' && s.length() == 1) // 문자열이 한자리 이고, 그 문자열이 공백이라면
    {
        word = 0;
    }

    cout << word << "\n";

    return 0;
}