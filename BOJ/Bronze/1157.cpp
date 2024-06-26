// 1157. 단어 공부
// https://www.acmicpc.net/problem/1157

#include <iostream>

using namespace std;

int main()
{
    int rank = 0;
    int Alphabet[26] = {};
    int Alphabet_size = sizeof(Alphabet) / sizeof(Alphabet[0]);
    char c;
    
    string s;

    cin >> s;


    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;   // 모든 문자를 대문자로 변환
        }
        Alphabet[s[i] - 'A']++; // 각 알파벳 빈도 체크
    }

    // 가장 많이 사용한 알파벳 찾기
    for (int i = 0; i < Alphabet_size; i++)
    {
        if (Alphabet[i] > rank)
        {
            rank = Alphabet[i];
            c = 'A' + i;
        }
        else if (rank == Alphabet[i])
        {
            c = '?';
        }
    }

    cout << c << endl;
    
    return 0;
}