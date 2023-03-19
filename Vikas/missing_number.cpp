#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;

    vector<unsigned long long int> v1;
    unsigned long long sum = 0;
    for (unsigned long long i = 0; i < n - 1; i++)
    {
        unsigned long long a;
        cin >> a;
        v1.push_back(a);
        sum = sum + a;
    }

    unsigned long long ans = (n * (n + 1)) / 2;

    cout << ans - sum;

    return 0;
}