#include<bits/stdc++.h>
using namespace std;

int solve(int b){
	int s = sqrt(b);
	if( s * s == b)
		return 1;
	return 0; 
}

int main(){

	int a, b;
	while(cin >> a >> b){
		if(a == 0 & b == 0) break;
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(solve(i)) cnt++;
		}
		cout << cnt << "\n";	
	}
}