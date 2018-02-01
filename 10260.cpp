#include <stdio.h>

int main() {
	#ifndef ONLINE_JUDGE
		freopen("10260.in","r",stdin);
	#endif
	char c;
						  //a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
	int prev=-1,codigo[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
	while (scanf("%c",&c)==1) {
		if(c=='\n'){
			prev=-1;
			printf("\n");
		}else {
			c-='A';
			if(prev!=codigo[c]){
				prev=codigo[c];
				if(codigo[c]!=0) 
					printf("%d",codigo[c]);
			}
		}
	}
	return 0;
}
