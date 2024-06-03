// 4101. 크냐?
// https://www.acmicpc.net/problem/4101

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    while(true)
    {
        cin >> a >> b;
        
        if(a == 0 && b == 0)
            break;

        else if(a > b)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
    return 0;
}
