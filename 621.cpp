#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string str;
    freopen("in.txt","r",stdin);
    cin>>t;
    while(t--){
        cin>>str;
        int len=str.size();
        //cout<<len;
        if(str=="1" || str=="4" || str=="78")
            cout<<"+\n";
        else if(str[len-1]=='5'       &&        str[len-2]=='3')
            cout<<"-\n";
        else if(str[0]=='9'       &&        str[len-1]=='4')
            cout<<"*\n";
        else
            cout<<"?\n";
    }
    return 0;
}

