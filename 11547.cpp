
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
    ll n,d,t;
    cin>>t;
    while(t--){
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        d=abs(n%10);
        cout<<d<<'\n';
    }
    return 0;
}



