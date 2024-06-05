// 10828. 스택
// https://www.acmicpc.net/problem/10828

#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    int n;
    stack<int> st;

    cin >> n;
    cin.ignore(); // 버퍼에 남아있는 개행 문자 제거

    for (int i = 0; i < n; i++)
    {
        string s;
        string command;

        getline(cin, s);

        stringstream ss(s); // 문자열 분리, 순서대로 command 에 할당
        ss >> command;

        // push command
        if (command == "push")
        {
            int value;
            ss >> value;    // 두번째 문자열인 숫자를 할당
            st.push(value);

        }

        // top command
        else if (command == "top")
        {
            if (!st.empty()) {
                cout << st.top() << endl;
            } else {
                cout << "-1" << endl;
            }
        }

        // pop command
        else if (command == "pop")
        {
            if (!st.empty()) {
                int popNum = st.top();
                st.pop();
                cout << popNum << endl;
            } else {
                cout << "-1" << endl;
            }
        }

        // size command
        else if (command == "size")
        {
            cout << st.size() << endl;
        }

        // empty command
        else if (command == "empty")
        {
            cout << (st.empty() ? "1" : "0") << endl;
        }
    }

    return 0;
}
