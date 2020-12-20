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
    ll t,sum,a,b,k=0,i;
    cin>>t;
    while(t--){
        sum=0;
        cin>>a>>b;
        for(i=a;i<=b;i++){
            if(i%2) sum+=i;
        }
        printf("Case %lld: %lld\n",++k,sum);
    }
    return 0;
}




