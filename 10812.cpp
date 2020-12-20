
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

    //freopen("in.txt","r",stdin);
    ll t, s, d, a, b;
    cin >> t;

    while( t-- ){
        cin >> s >> d;

        if( (s < d) ) // test 3 0 and 5 4
            cout << "impossible\n";
        else if(( s + d) % 2)
            cout<<"impossible\n";
        else{
            a = ( s + d ) / 2;
            b = s - a;
            a = MAX(a,b);
            b = MIN(a,b);
            cout << a << " " << b << "\n";
        }
    }
    return 0;
}



