#include<bits/stdc++.h>
#define ll long long int
                      
using namespace std;
void solve()
{
 ll n;
 cin>>n;
 vector<ll> v(n-1);
 for(auto &i:v) cin>>i;
 int xo=0;
 for(auto &i:v)
 {
    xo^=i;
 }
 for(int i=0;i<=n;i++)
 {
    xo^=i;
 }
 cout<<xo<<"\n";

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  solve();
  return 0;
}