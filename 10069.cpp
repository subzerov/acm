#include <stdio.h>
#include <string.h>

char total[102];
int p=100;

void f(int *y) {
	y[1]=9;
	printf("%d\n",y[1]);
}
int main() {
	char grande[1002],chiquito[102];
	int n,largo,i,j;
	
	int x[100]={1,2,3};
	printf("%d\n",x[1]);
	f(&x);
	printf("%d\n",x[1]);
	total[101]=0;
	scanf("%d",&n);
	while(n--){
		scanf("%s %s",&grande,&chiquito);
		largo=strlen(chiquito);
		/*for (i=0,j=0;grande[i]!=0;i++)
			if(grande[i]==chiquito[j]){
				j++;
				if (
			}*/
	}
	return 0;
}
