include <stdio.h>


int main() {
	int x,n,i=1;
	int m,r;
	scanf("%d",&n);
	while(i<=n) {
		scanf("%d",&x);
		printf("Case #%d: %d is a ",i,x);
		do {
			while (x){
				m=x%10;
				r+=m*m;
				x=x/10;
				//printf("\nx=%d m=%d r=(m*m)%d",x,m,r);
			}
			x=r;
			r=0;
		}while(x>9);
		if (x==1)
			printf("Happy number.\n");
		else
			printf("Unhappy number.\n");
		i++;
	}
	return 0;
}