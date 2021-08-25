#include<bits/stdc++.h>
using namespace std;
int main(){

    int t, n, k, p, cnt = 0;
    cin >> t;
    while(t--){
        cin >> n >> k >> p;
        for( int i = 1; i <= p; i++){
            if( k == n )
                k = 1;
            else
                k++;
        }
        cout << "Case "<< ++cnt << ": " << k << "\n";
    }

    return 0;

}
