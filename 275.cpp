#include <stdio.h>

int main() {
	int r[1006],i,j,n,d,c;
	while ( scanf("%d %d",&n,&d)==2 && !(n==0 && d==0)){
		printf(".");
		for (i=1,c=49; ;i++){
			r[i]=n%d;
			n=r[i]*10;
			if(n==0){
				printf("\nThis expansion terminates.\n\n");
				break;
			}
			else {
				for(j=1;j<i;j++) {
					if(r[i]==r[j]){
						printf("\nThe last %d digits repeat forever.\n\n",i-j);
						c=-1;
						break;
					}
				}
			}
			if(c==-1) break;
			if (c==0) {printf("\n");c=50;}
			printf("%d",n/d);
			c--;
		}
	}
	return 0;
}

