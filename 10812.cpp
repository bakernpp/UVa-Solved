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
    int t,s,d,a,b;
    cin>>t;
    while(t--){
        cin>>s>>d;
        if(s<d)
            cout<<"impossible\n";
        else{
            a=(s+d)/2;
            b=s-a;
            cout<<a<<" "<<b<<"\n";
        }
    }
    return 0;
}



