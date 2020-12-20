
#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define MAX(a,b) a>b
#define MIN(a,b) a<b
#define pi 2*acos(0.0)
#define ll long long
#define maxsz 2e5+10
using namespace std;
int main(){
    //freopen("in.txt","r",stdin);
    ll a,ans;
    while (scanf("%lld",&a)){
        if(a<0) break;
        ans=(a*(a+1))/2;
        ans+=1;
        cout<<ans<<'\n';
    }
    return 0;
}



