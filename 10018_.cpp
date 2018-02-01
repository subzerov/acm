#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

//sum string 10018.2
void suma (char c2[], char c1[],int i, int ii) {
	//printf("\n<%s> %s %d %d\n",c1,c2,i,ii);
	char carry[]={"00"};
	int f=9,r;
	for ( ;f>=ii;f--,i--) {
		//printf("s[%d]: %c + %c\n",f,c1[f],c2[i]);
		r=(c1[f]-'0')+(c2[i]-'0')+(carry[0]-'0');
		sprintf(carry,"%.2d",r);
		c1[f]=c2[f]=carry[1];
	}
	if (carry[0]!='0')
		c1[f]=carry[0];
	c2[i+1]='0';
}

int main() {
	char c1[11],c2[11]="0000000000";
	int n;
	int i,t1,t2;
	c1[10]=0;
	scanf("%d",&n);
	while(n>0) {
		t1=0;
		t2=9;
		scanf("%*c%c",&c1[t1]);
		while (c1[t1]!='\n' && c1[t1]!=EOF) {
			c2[t2--]=c1[t1]; 
			t1++;
			scanf("%c",&c1[t1]);
		}
		c1[t1]=0;
		printf("\nnum leido= %s %s %c",c1,c2);
		//for (i=0;i<1000;i++) {
			suma (c1,c2,t1-1,t2+1);
		//}
		printf("\n%s %s",c1,c2);
		n--;
	}
	return 0;
}
