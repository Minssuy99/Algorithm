// 5648. 역원소 정렬
// https://www.acmicpc.net/problem/5648

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    vector<long long> vec;
    string line;

    // 입력을 여러 줄로 받기
    while (getline(cin, line))
    {
        stringstream ss(line);
        string number;

        // 공백 기준으로 나눠서 각 숫자를 처리
        while (ss >> number)
        {
            // 숫자 뒤집기
            reverse(number.begin(), number.end());

            // 앞의 불필요한 0을 제거하고 long long으로 변환
            long long reversedNum = stoll(number);

            vec.push_back(reversedNum);
        }
    }

    // 정렬
    sort(vec.begin(), vec.end());

    // 결과 출력
    for (const auto &num : vec)
    {
        cout << num << '\n';
    }

    return 0;
}
