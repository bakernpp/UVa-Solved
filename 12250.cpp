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

    string str;
    ll casenum = 0;
    while( cin >> str ){


        if(str == "#") break;
        else{
            cout << "Case " << ++casenum << ": ";
            if(str == "HELLO") cout << "ENGLISH";
            else if(str == "HOLA") cout << "SPANISH";
            else if(str == "HALLO") cout << "GERMAN";
            else if(str == "BONJOUR") cout << "FRENCH";
            else if(str == "CIAO") cout << "ITALIAN";
            else if(str == "ZDRAVSTVUJTE") cout << "RUSSIAN";
            else cout << "UNKNOWN";
            cout << '\n';
        }
    }
    return 0;
}





