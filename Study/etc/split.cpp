#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &input, string delimiter)
{
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter); // input.find 는 size_t 타입이라서 귀찮으니까 auto 로 한다.
    while (end != string::npos)
    {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main()
{
    string str = "apple,banana,orange,grape";
    vector<string> fruits = split(str, ",");

    for (const string &fruit : fruits)
    {
        cout << fruit << " ";
    }

    return 0;
}