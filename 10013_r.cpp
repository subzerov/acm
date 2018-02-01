#include <stdio.h>
int x;
char procesa (int m) {
	char a,b;
	if (m>0) {
		scanf("%c%*c%c%*c",&a,&b);
		x=a-'0'+b-'0';
		procesa (m-1);
		printf("%c",x%10);
		
	}
}
int main() {
	int blocks,m;
	scanf("%d",&blocks);
	scanf("%*c");
	while(blocks>0){
		scanf("%*c%d%*c",&m);
		printf(">%d\n",m);
		procesa(m);
		blocks--;
	}
	return 0;
}
