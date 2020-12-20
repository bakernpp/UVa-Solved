
#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define MAX(a,b) a>b
#define MIN(a,b) a<b
#define pi 2*acos(0.0)
#define ll long long


using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    ll n,arr[10005],diff,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0){
            diff=abs(arr[i]-arr[i-1]);
            if(diff<=n)
                cnt++;
        }
    }
    if(cnt==(n-1))
        cout<<"Jolly\n";
    else
        cout<<"Not jolly\n";
    return 0;
}



