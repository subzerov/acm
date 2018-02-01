#include <stdio.h>
#define MAX 101

int main() {
	#ifndef ONLINE_JUDGE
		freopen("637.in","r",stdin);
	#endif
	int t,h,i,j,c,cc;
	int ma[26][MAX];			//comprimo en paquetes de 4
	for (i=1;i<26;i++) {
		h=i*4;					//descomprimo
		t=(h/4+(h%4?1:0))*4;	//numero de paquetes total
		c=1;cc=t;
		for (j=0;j<t;j++) {
			switch (j%4) {
				case 0:case 3:
					ma[i][j]=cc--;
					break;
				case 1:case 2:
					ma[i][j]=c++;
					break;
			}
		}
	}
	while(scanf("%d",&h)==1 && h!=0){
		printf("Printing order for %d pages:\n",h);
		t=(h/4+(h%4?1:0))*4;
		c=1;cc=t;
		for (j=0;j<t;j++) {
			switch (j%4) {
				case 0:case 3:
					if (cc--;
					break;
				case 1:case 2:
					printf("c++;");
					break;
			}
		}
	}	
	return 0;
}
