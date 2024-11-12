// 9012. 괄호
// https://www.acmicpc.net/problem/9012

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        bool check = true;
        stack<char> st;
        string s;

        cin >> s;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '(')
            {
                st.push('('); // ( 라면 집어넣고
            }
            else
            {
                if (!st.empty() == true)
                {
                    st.pop(); // 다른놈이 들어오면 꺼내기
                }
                else
                {
                    check = false; // 처음부터 ) 들어왔을때 바로 false 처리
                    break;
                }
            }
        }
        if (st.empty() == true && check == true)
        {
            cout << "YES" << endl; // 스택 다 비웠고 check가 참이라면
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

/********USE Function************

#include <iostream>
#include <stack>

using namespace std;

string stackFunction(string s)
{
    stack<char> st;

    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] == '(')
        {
            st.push('(');
        }
        else
        {
            if (!st.empty() == true)
            {
                st.pop();
            }
            else
            {
                return "NO";    // 처음부터 ) 가 들어왔다면 바로 NO 처리
            }
        }
    }
    if (st.empty() == true)
    {
        return "YES";   // 다 끝나고나서 스택이 말끔히 비워져있다면 YES 반환
    }
    else
    {
        return "NO";
    }
}


int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        cout << stackFunction(s) << endl;
    }

    return 0;
}
 ************************************************/
