#include <bits/stdc++.h>
#define ll long long int

using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n==1) {
        cout << n << "\n";
        return;
    }
    if(n<=3){
        cout << "NO SOLUTION\n";
        return;
    }
    for(int i=2;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2)
    {
        cout<<i<<" ";
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