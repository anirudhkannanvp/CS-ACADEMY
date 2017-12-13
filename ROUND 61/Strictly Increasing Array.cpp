#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
ll a[1000056];
ll longest;
void find1(ll x)
{
ll left = 1, right = longest;
while(left <= right)
{
ll mid=(left + right)/2;
if(a[mid] <= x)
{
left=mid + 1;
}
else{
right = mid - 1;
}
}
a[++right] = x;
if(right > longest)
longest = right;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
ll n;
cin>>n;
for(ll i = 0; i < n; ++i)
{
a[i] = INT_MAX;
}
ll x;
longest = 0;
for(ll i = 1; i <= n; ++i)
{
cin>>x;
if((x -= i) >= 0)
find1(x);        
}
cout << n - longest ;
return 0;
}