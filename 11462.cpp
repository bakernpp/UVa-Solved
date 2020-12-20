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
    ll n,a;
    vector< int >v;

    while( cin >> n){

        if( !n ) break;
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++){

          if(i == (n - 1)) printf("%d", v[i]);
          else printf("%d ", v[i]);

        }

        cout<<'\n';

        v.clear();

    }
    return 0;
}



