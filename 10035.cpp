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





int Solve(int a, int b){

    int sum,carry,cntCarry;
    sum=carry=cntCarry=0;
    while(a!=0 && b!=0){
        sum=(a%10)+(b%10)+carry;
        if(sum>=10){
            carry=1;
            cntCarry++;
        }
        else
            carry=0;
        a/=10;
        b/=10;
    }
    return cntCarry;


}





int main(){
    freopen("in.txt","r",stdin);
    ll a,b,ans;
    while (cin>>a>>b){
        if(!a && !b) break;
        ans=Solve(a,b);
        if(ans<1)
            cout<<"No carry operation.\n";
        else if(ans==1)
            cout<<"1 carry operation.\n";
        else
            cout<<ans<<" carry operations.\n";

    }
    return 0;
}






