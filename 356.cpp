#include <stdio.h>

int cuads[151];

void calcula(){
	int i,r;
	for (i=2,r=0;i<151;i++){
		r+=(i-1);
		cuads[i]=r*4;
	}
}

int main() {
	int n;
	bool b=0;
	calcula();

	while(scanf("%d",&n)==1){
	if(n>0){
		if(b)
			printf("\n");
		printf("In the case n = %d, %d cells contain segments of the circle.\n",n,8*n-4);
		printf("There are %d cells completely contained in the circle.\n",cuads[n]);
		b=1;
	}
	}
	return 0;
}
