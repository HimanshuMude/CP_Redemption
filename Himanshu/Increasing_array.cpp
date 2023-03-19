#include <bits/stdc++.h>
#define ll long long int

using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll ans = 0;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]>v[i])
        {
            ans+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}