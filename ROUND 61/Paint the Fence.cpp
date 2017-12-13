#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;

unordered_map<ll ,vector<ll>> store;

ll findfreq(ll left,ll right){
    ll a=lower_bound(store[1].begin(),store[1].end(),left)- store[1].begin();
    ll b=lower_bound(store[1].begin(),store[1].end(),right)- store[1].begin();
return b-a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll n,m;
    ll arr[100005],pa1[100005],pa2[100005],a,b,i,j;
    cin>>n>>m;
    memset(arr,0,sizeof(arr));
    for(i=0;i<m;i++){
        cin>>a>>b;
        a-=1;
        b-=1;
        pa1[i]=a;
        pa2[i]=b;
        arr[a]+=1;
        arr[b+1]-=1;
        //cout<<"HELLO-1";
    }
    for(i=1;i<n;i++){
        arr[i]+=arr[i-1];
        //cout<<"HELLO-2";
    }
    ll cou=0;
    for(i=0;i<n;i++){
       if(arr[i]==0)
           cou+=1;
        if(arr[i]==1){
            store[1].push_back(i);
        }
        //cout<<"HELLO-3";
    }
    for(i=0;i<m;i++){
        a=pa1[i];
        b=pa2[i];
        //cout<<"HELLO-4";
        cout<<findfreq(a,b+1)+cou<<"\n";
    }
return 0;
}