// 10818. 최소, 최대
// https://www.acmicpc.net/problem/10818

#include <iostream>

using namespace std;

int main()
{
    int N;
    int number;
    int min = 1000000;
    int max = -10000000;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> number;

        if (number > max)
        {
            max = number;
        }

        if (number < min)
        {
            min = number;
        }
    }

    cout << min << " " << max << endl;

    return 0;
}


/* use array, but slow
int main()
{
    int N;
    int min = 1000000;
    int max = -1000000;

    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
        
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min << " " << max << endl;


    return 0;
}
 */