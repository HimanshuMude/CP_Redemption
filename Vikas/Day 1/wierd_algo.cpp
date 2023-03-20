#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;
    vector<long long int> v1;
    v1.push_back(n);
    while (n != 1)
    {
        unsigned long long int ans = 0;
        if (n % 2 == 0)
        {
            ans = n / 2;
            v1.push_back(ans);
            n = n / 2;
        }
        else
        {
            ans = (n * 3) + 1;
            v1.push_back(ans);
            n = n * 3 + 1;
        }
    }

    for (unsigned long long int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}