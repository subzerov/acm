#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

//sum string 10018.2
void suma (char c2[], char c1[],int i, int ii) {
	char carry[]={"00"};
	int f=9,r;
	for ( ;f>=ii;f--,i--) {
		r=(c1[f]-'0')+(c2[i]-'0')+(carry[0]-'0');
		sprintf(carry,"%.2d",r);
		c1[f]=c2[f]=carry[1];
	}
	if (carry[0]!='0')
		c1[f]=carry[0];
	c2[i+1]='0';
}

void procesa (char *c1, char *c2, int t) {
	int i=1;
	//while (strcmp(c1,c2)!=0) {
		printf("\n%s\n%s %d",c1,c2,t);
		i++;
	//}
}
int main() {
	char c1[11]="0000000000",c2[11]="0000000000";
	int n,p1,p2;
	scanf("%d",&n);
	while(n>0) {
		p1=0;
		p2=9;
		scanf("%*c");
		while (scanf("%c",&c2[p2])==1 && c2[p2]!='\n'){
			c1[p1++]=c2[p2--];
		}
		c2[p1]=c2[p2]='0';
		procesa(c1,c2,p1);
		n--;
	}
	return 0;
}