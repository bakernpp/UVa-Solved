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

    ll a, b, c;

    while( cin >> a >> b >> c){

        if( a==b && a==c && b==c )
            cout << "*\n";
        else if( a==b && a!=c && b!=c )
            cout << "C\n";
        else if( a==c && b!=c && a!=b)
            cout << "B\n";
        else
            cout << "A\n";
    }


    return 0;
}




