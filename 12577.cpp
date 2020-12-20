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
    int k=1;
    string str;
    while(cin>>str){
        if(str=="*") break;
        if(str=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n",k++);
        else
            printf("Case %d: Hajj-e-Asghar\n",k++);
    }
    return 0;
}




