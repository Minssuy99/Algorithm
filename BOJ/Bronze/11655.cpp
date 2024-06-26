// 11655. ROT13
// https://www.acmicpc.net/problem/11655

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if(s[i] - 'A' < 13)
            {
                s[i] += 13;
            }
            else
            {
                s[i] -= 13;
            }
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            if(s[i] - 'a' < 13)
            {
                s[i] += 13;
            }
            else
            {
                s[i] -= 13;
            }
        }
        
    }

    cout << s << endl;

    return 0;
}