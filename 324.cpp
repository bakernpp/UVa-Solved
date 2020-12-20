#include<bits/stdc++.h>
#define MAX(a,b) a>b
#define MIN(a,b) a<b
using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    int n,k,a,b,t1,t2;
    string str;
    k=1;
    while(cin>>str){
        cin>>n;
        printf("Case %d:\n",k++);
        while(n--){
            cin>>a>>b;
            t1=MIN(a,b);
            t2=MAX(a,b);
            if(str[t1]==str[t2])
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}



