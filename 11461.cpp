
#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
#include <cstring>

#define pi 2*acos(0.0)
#define ll long long
#define maxsz 2e5+10

#define MAX(a,b)  ( ( a > b ) ? a : b )
#define MIN(a,b)  ( ( a < b ) ? a : b )
#define ABS(a)    ( ( a > 0 ) ? a : (-(a)))
#define SQ(a) ( a * a )


using namespace std;
int main(){

    //freopen("in.txt","r",stdin);
    ll a,b,ans;

    while(  (scanf("%lld %lld", &a, &b)) && ( a && b )  ){

        ll res=0;
        for(int i = a; i <= b; i++){
            ans = sqrt(i);
            if( (ans * ans) == i) res++;
        }

        cout<<res<<'\n';
    }
    return 0;
}




