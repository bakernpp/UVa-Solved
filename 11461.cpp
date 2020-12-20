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
    ll a,b,ans;
    while(  (scanf("%lld %lld",&a,&b))  ){

        ll res=0;
        for(int i=a;i<=b;i++){
            int ans=sqrt(i);
            if((ans*ans)==i) res++;
        }

        cout<<res<<'\n';
    }
    return 0;
}




