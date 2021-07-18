#include<bits/stdc++.h>
double EPS = 1e-9;// need for error
double PI = acos(-1);
typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP maker_pair
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define MAX(a, b) a > b
#define MIN(a,b) a < b
#define SQ(x) x * x
#define RESET(a,b) memset(a, b, sizeof(a))




using  namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T, N, mx, i, a, tc = 0;
    cin >> T;
    while(T--){
        cin >> N;
        mx = 0;
        for(i = 0; i < N; i++){
            cin >> a;
            if(a > mx)
                mx = a;
        }
        cout << "Case " << ++tc << ": " << mx << '\n';
    }

    return 0;
}
