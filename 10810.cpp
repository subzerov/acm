#include <stdio.h>

int main() {
	int vec[500001],i,j,c,t;
	bool b;
	vec[0]=0;
	while(scanf("%d",&vec[++vec[0]])==1) ;
	for (i=0;i<vec[0];i++)
		printf("%d ",vec[i]);
	printf("\n");
	c=0;
	for (i=1;i<vec[0];i++)
		for (j=i+1,b=0;j<vec[0] && b==0;j++)
			if(vec[i]<vec[j]){
				t=vec[i];
				vec[i]=vec[j];
				vec[j]=t;
				c++;
				b=1;
			}
	printf("%d\n",c);
	for (i=0;i<vec[0];i++)
		printf("%d ",vec[i]);
	printf("\n");
	return 0;
}
