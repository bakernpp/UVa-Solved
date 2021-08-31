#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){

    int n, nb, ne, cnt = 0, a, res;
    while(cin >> n){
        if(n == 0) break;
        nb = ne = 0;
        for( int i = 1; i <= n; i++){
            cin >> a;
            if(a!=0) nb++;
            else ne++;
        }
        res = nb - ne;
        printf("Case %d: %d\n", ++cnt, res);
    }


    return 0;
}
