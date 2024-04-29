#include <iostream>

using namespace std;

int main()
    {
    const int MAX_SIZE = 1000;
    int n = 0;

    cin >> n;

    if (n <= MAX_SIZE) {
        double* subject = new double[n];

        for (int i = 0; i < n; ++i) {
            cin >> subject[i];
        }

        double m = subject[0];

        for (int i = 1; i < n; ++i) {
            if (subject[i] > m) {
                m = subject[i];
            }
        }

        for (int i = 0; i < n; ++i) {
            double result = subject[i] / m * 100;
            subject[i] = result;
        }

        double allSubject = 0;

        for (int i = 0; i < n; ++i) {
            allSubject += subject[i];
        }

        double average = allSubject / n;

        cout <<average << endl;
    }

    return 0;
}