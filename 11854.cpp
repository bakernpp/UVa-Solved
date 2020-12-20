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
    freopen("in.txt","r",stdin);
    ll a,b,c,p,q,r;
    while (cin>>a>>b>>c){
        if(!a && !b && !c) break;
        p=a*a;
        q=b*b;
        r=c*c;
        if( (p+q)==r || (p+r)==q || (r+q)==p)
            cout<<"right"<<'\n';
        else
            cout<<"wrong"<<'\n';

    }
    return 0;
}





