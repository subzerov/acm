#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cctype>
#include <string>
#include <string.h>

using namespace std;

bool comp(char a, char b){
	char am=tolower(a),bm=tolower(b);
	if (am==bm)
		return a>b;
	return am>bm;
}

int t,p,c,tmp;

int next_fpermutation(char cad[]) {
	if (p<t){
		tmp=cad[]
	}
	return 0;
}
int main(){
	char cad[11];
	while(scanf("%s",&cad)==1){
		printf("\n<%s>",cad);
		t=strlen(cad)-2;
		reverse(cad,cad+t);
		p=c=0;
		do{
			printf("\n%s",cad);
		}while(next_fpermutation(cad));
	}
	return 1;
}
