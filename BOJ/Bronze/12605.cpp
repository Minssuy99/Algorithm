// 12605. 단어순서 뒤집기
// https://www.acmicpc.net/problem/12605

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;
    int cnt = 1;
    stack<string> st;

    cin >> n;
    cin.ignore(); // 입력버퍼 비우기

    for (int i = 0; i < n; i++)
    {
        string word;
        string sentence;
        getline(cin, sentence);         // 공백포함된 문자열 받기
        istringstream stream(sentence); // stream 형태로 변환

        while (stream >> word) // stream 을 읽어오는 작업이 성공했다면
        {
            st.push(word);
        }

        cout << "Case #" << cnt << ": ";
        ++cnt;

        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << '\n';
    }

    return 0;
}