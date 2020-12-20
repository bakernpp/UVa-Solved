#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#define MAX(a,b) a>b
#define MIN(a,b) a<b
#define pi 2*acos(0.0)
#define ll long long
#define maxsz 2e5+10
using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    ll a,b;
    while(cin>>a>>b){
        ll ans=abs(a-b);
        cout<<ans<<'\n';
    }
    return 0;
}




