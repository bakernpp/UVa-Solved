#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){

    int cnt, n, i, sum;

    cnt = 1;

    while(scanf("%d", &n)==1){
        if(n==0) break;
        sum = 0;
        for(i = 1; i <=(n/2); i++){
            if(n%i == 0)
                sum += i;

        }
        if(cnt == 1) cout << "PERFECTION OUTPUT\n";
        printf("%5d  ", n);
        if(sum == n) cout << "PERFECT\n";
        else if(sum < n) cout << "DEFICIENT\n";
        else if(sum > n) cout << "ABUNDANT\n";
        cnt++;
    }
    cout << "END OF OUTPUT\n";

    return 0;
}
