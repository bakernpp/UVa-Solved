#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define pi 2*acos(0.0)
#define ll long long
#define maxsz 2e5+10

#define MAX(a,b)  ( ( a > b ) ? a : b )
#define MIN(a,b)  ( ( a < b ) ? a : b )
#define ABS(a)    ( ( a > 0 ) ? a : (-(a)))
#define SQ(a) ( a * a )


using namespace std;
int main(){

    char str[1005], ans;
    while( gets(str) ){
		
		for(int i = 0; str[i] !='\0'; i++){
			
			ans = str[i] - 7;
			printf("%c", ans);
		
		}
		cout << '\n';
		

    }
    return 0;
}
