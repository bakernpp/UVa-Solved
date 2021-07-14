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

    ll t, ascend, descen, arr[10003];
    cin >> t;
    cout<< "Lumberjacks:\n";
    while(t--){

        ascend = descen = 0;
        for(int i = 0; i< 10; i++){
            cin >> arr[i];
            if(i){
                if( arr[i] > arr[i-1] ) ascend++;
                else descen++;
            }
        }

        if(ascend == 9 || descen == 9) cout << "Ordered\n";
        else  cout << "Unordered\n";
    }


    return 0;
}

