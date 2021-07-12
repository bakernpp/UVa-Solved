#include<bits/stdc++.h>
#include<cstring>

#define pi 2*cos(0.0)
#define ll long long
#define mxsz 100005

#define ABS(a) (a>0)? a : -(a)
#define MAX(a,b) (a>b)? a : b
#define MIN(a,b) (a<b)? a : b
#define SQ(a) a*a

using namespace std;

int Solve(ll arr[], ll n){

    int res = 0, temp;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                res++;
            }
        }
    }

    return res;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    ll t, n, arr[mxsz], cntmove;

    cin >> t;
    while( t-- ){
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        cntmove = Solve(arr, n);
        cout << "Optimal train swapping takes " << cntmove <<" swaps.\n";
    }
    return 0;
}








