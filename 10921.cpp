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

    char str[200], ch;
    while( gets(str) ){

        for( int i = 0; str[i] != '\0'; i++){

            ch = str[i];
            if(ch == 'A' || ch == 'B' || ch == 'C') cout << "2";
            else if(ch == 'D' || ch == 'E' || ch == 'F') cout << "3";
            else if(ch == 'G' || ch == 'H' || ch == 'I') cout << "4";
            else if(ch == 'J' || ch == 'K' || ch == 'L') cout << "5";
            else if(ch == 'M' || ch == 'N' || ch == 'O') cout << "6";
            else if(ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') cout << "7";
            else if(ch == 'T' || ch == 'U' || ch == 'V') cout << "8";
            else if(ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') cout << "9";
            else cout << ch;
        }
        cout << '\n';

    }
    return 0;
}






