#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc,a,b;
	freopen("11172.txt","r",stdin);
	cin>>tc;
	while(tc--){
		cin>>a>>b;
		if(a<b) cout<<"<\n";
		else if(a>b) cout<<">\n";
		else cout<<"=\n";
	}
	return 0;
}
