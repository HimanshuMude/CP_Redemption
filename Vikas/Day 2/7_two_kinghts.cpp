#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* code */
    long long int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long total_positons = (long long)(i * i) * ((i * i) - 1) / 2;
        long long attack_positons = 4 * (i - 1) * (i - 2);
        cout << ((long long)(i * i) * ((i * i) - 1) / 2) - ((long long)4 * ((i - 1) * (i - 2))) << endl;
    }
    return 0;
}
