#include <stdio.h>

int fac(int n) {
	if (n==1)
		return 1;
	else 
		return n*fac(n-1);
}

/*int main() {
	printf("%d",fac(3));
	return 0;
}

int main() {
	int n[9];
	int c;
	long long int f;
	scanf("%d",&c);
	while(c!=0) {
		printf("%d! --\n",c);
		n[0]=n[1]=n[2]=n[3]=n[4]=n[5]=n[6]=n[7]=n[8]=n[9]=0;
		//printf("%d\n",fac(c));
		f=1;
		while(c>0){
			f=f*c;
			c--;
		}
		printf("%d\n",f);
		printf("\t(0)\t%d\t(1)\t%d\t(2)\t%d\t(3)\t%d\t(4)\t%d\n",n[0],n[1],n[2],n[3],n[4]);
		printf("\t(5)\t%d\t(6)\t%d\t(7)\t%d\t(8)\t%d\t(9)\t%d\n",n[5],n[6],n[7],n[8],n[9]);
		scanf("%d",&c);
	}
	return 0;
}

