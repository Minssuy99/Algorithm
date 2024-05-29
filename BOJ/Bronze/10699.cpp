// 10699. 오늘날짜
// https://www.acmicpc.net/problem/10699

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    time_t timer = time(NULL);
    struct tm *t = gmtime(&timer);

    cout << t->tm_year + 1900 << "-"
         << setfill('0') << setw(2) << t->tm_mon + 1 << "-"
         << setfill('0') << setw(2) << t->tm_mday << endl;

    return 0;
}


/* 
int main()
{
    time_t timer = time(NULL);
    struct tm *t = localtime(&timer);

    cout << t->tm_year + 1900 << "-";
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mon + 1 << "-";
    cout.width(2);
    cout.fill('0');
    cout << t->tm_mday;

    return 0;
}
 */