/// 1259. 팰린드롬수
// https://www.acmicpc.net/problem/1259

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    while(true)
    {
        string num;
        bool isPalindrome = true;

        cin >> num;

        stack<char> s;

        int length = num.size();
        int half = length / 2;

        if (num[0] == '0')  // 첫자리가 0이라면 break
        break;

        for (int i = 0; i < half; i++)
        {
            s.push(num[i]);
        }

        int start = (length % 2 == 0) ? half : half + 1;

        for (int i = start; i < length; i++)
        {
            if(s.top() != num[i])
            {
                isPalindrome = false;
            }
            s.pop();
        }

        if(isPalindrome == true)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}