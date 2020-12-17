#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char str;
	int n=0;
	int f=1;
	freopen("272.txt","r",stdin);
	while( (str=getchar())!=EOF ){
		//printf("%s",str);
		//for(int i=0;str[i]!='\0';i++){
			if(str=='"'){
				//cout<<"f= "<<f;
				if(f%2) printf("``");
				else printf("''");
				f++;
				//cout<<"f= "<<f;
			}
			else printf("%c",str);
	}
		//cout<<'\n';
	return 0;
}
