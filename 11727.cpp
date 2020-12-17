#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	
	int arr[100],i,tc,k=0;
	//freopen("costcutting.txt","r",stdin);
	cin>>tc;
	
	while(tc--){
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		cout<<"Case "<<++k<<": "<<arr[1]<<'\n';
	}
	return 0;
}
