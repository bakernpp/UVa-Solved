#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,res,a,c,b;
    //freopen("in.txt","r",stdin);
    cin>>t;
    while(t--){
        cin>>n;
        res=0;
        while(n--){
            cin>>a>>b>>c;
            res+=a*c;
        }
        cout<<res<<'\n';
    }
    return 0;
}


