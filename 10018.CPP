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
ll Reverse( ll n ){
    ll c, z = 0;
    while( n!= 0 ){
        c = n % 10;
        z = 10 * z + c;
        n /= 10;
    }
    return z;
}
int IsPalindrome(ll n){
    ll r = Reverse(n);
    if( r == n )
        return 1;
    else
        return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(NULL);

    ll n, num , sum, cnt ;
    cin >> n;
    while ( n-- ){
        cin >> num;
        cnt = 0;
        while(1){
            sum = num +  Reverse(num);
            cnt++;
            if(IsPalindrome(sum)){
                cout << cnt << " " << sum << '\n';
                break;
            }
            else{
                num = sum;
            }

        }
    }
    return 0;
}




