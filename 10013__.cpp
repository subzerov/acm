#include <stdio.h>

/*void suma (char c1[], char c2[], int l) {
	int r;
	char carry[]={"00"};
	//printf("cads: %s %s\n",c1,c2);
	for ( ;l>=0;l--) {
		r=(c1[l]-'0')+(c2[l]-'0')+(carry[0]-'0');
		sprintf(carry,"%.2d",r);
		c1[l]=carry[1];
	}
	if (carry[0]!='0')
		printf("%c",carry[0]);
	printf("%s\n\n",c1);
}*/

void suma(char c[], char a, char b,int l) {
	int r;
	char carry[]={"00"};
	r=(a-'0')+(b-'0')
	sprintf(carry,"%.2d",r);
	c1[l]=carry[1];
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("10013.in","r",stdin);
	#endif
	int block,t,i;
	char c[1000001],c1,c2;
	scanf("%d",&block);
	while(block>0) {
		scanf("%d",&t);
		c1[0]=c2[0]='0';
		i=0;
		for ( ;t>0;t--) {
			scanf("%*c%c%*c%c",&c1,&c2);
			suma (c,c1,c2,t);
			i++;
		}
		c1[i]=c2[i]=0;
		//suma (c1,c2,i-1);
		block--;
	}
	return 0;
}
