/// 31403. A + B - C
// https://www.acmicpc.net/problem/31403

#include <iostream>

using namespace std;

int main()
{
    string a, b, c;

    cin >> a >> b >> c;

    cout << stoi(a) + stoi(b) - stoi(c) << endl;
    cout << stoi(a + b) - stoi(c) << endl;
    
    return 0;
}