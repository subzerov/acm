#include <stdio.h>

void nivela (string &c, int i) {
	while (i>0) {
		c="0"+c;
		i--;
	}
}
//de 10018.cpp v1 + mod
void sum (string c1, string c2) {
	if (c1.length()<c2.length()) nivela( c1, c2.length()- c1.length());
	else if (c1.length()>c2.length()) nivela(c2,c1.length()-c2.length());
	int l=c1.length()-1,r,c=0;
	char carry[]={"00"};
	for ( ;l>=0;l--) {
		r=(c1[l]-'0')+(c2[l]-'0')+(carry[0]-'0');
		sprintf(carry,"%.2d",r);
		c1[l]=carry[1];
		if (carry[0]!='0')
			c++;
	}
}

int main() {
	short int n;
	
	fib[20]={"1","1","1"},i=0;
	for (i=3;i<20;i++) {
		fib[i]=suma(fib[i-1],fib[i-2]);
	}
	for (i=0;i<10;i++) {
		printf("%d %d\n",i,fib[i]);
	}
	/*while(scanf("%d",&n)) {
		printf("The Fibonacci number for %d is %f\n",n,fib(n));
	}*/
	return 0;
}
