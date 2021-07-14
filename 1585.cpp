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

    ll t, cnt, sum, i;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        ll len = str.size();
        //cout << "len " << len << endl;
        sum = cnt = 0;
        for(int i = 0; i < len; i++){
            if(str[i] == 'O')
                cnt++;
            else
                cnt = 0;

            sum += cnt;
        }
        cout << sum << '\n';

    }


    return 0;
}


