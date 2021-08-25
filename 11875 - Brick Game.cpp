#include<bits/stdc++.h>
#include<cstring>

#define pi 2*cos(0.0)
#define ll long long
#define mxsz 2e5+10

#define ABS(a) (a>0)? a : -(a)
#define MAX(a,b) (a>b)? a : b
#define MIN(a,b) (a<b)? a : b
#define SQ(a) a*a

using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    ll t, n, arr[1003], cnt = 0;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int res = n / 2;
        cout << "Case "<< ++cnt << ": " << arr[res] << "\n";
    }




    return 0;
}




