#include <bits/stdc++.h>
#define ll long long int

using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = (((ll)(i * i) * ((i * i) - 1)) / 2) - (ll)(4 * (i - 1) * (i - 2));
        cout<<ans<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}