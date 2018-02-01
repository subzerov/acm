#include <math.h>
#include <stdio.h>

int abs (int x) {
	if (x<0)
		return -x;
	return x;
}
int main() {
	int a,b,n,d;
	char *msg[2]={"Jolly","Not jolly"};
	bool s;
	while (scanf("%d",&n)==1) {
		scanf("%d",&a);
		if (n>1){
			s=0;
			scanf("%d",&b);
			d=abs(a-b);
			for ( ;n>2;n--) {
				scanf("%d",&a);
				if (--d==abs(a-b))
					b=a;
				else
					s=1;
			}
			printf("%s\n",msg[s]);
		}else
			printf("Jolly\n");
	}
	return 0;
}
