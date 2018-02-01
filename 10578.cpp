#include <stdio.h>
#include <string.h>

int main() {
	#ifndef ONLINE_JUDGe
		freopen("10578.in","r",stdin);
	#endif
	int jug[2][7];	//2 jugadores, 7 cartas (1-6) + 0
	char cad[1000];
	int i,j,l,sum;
		scanf("%s\n",&cad);
		l=strlen(cad);
		memset(jug,0,sizeof(jug));
		sum=0;
		for (i=0;i<l;i++){
				sum+=cad[i]-'0';
			jug[i%2][cad[i]-'0']++;
		}
		for (i=1;i<7;i++)
			printf("%d : %d %d\n",i,jug[0][i],jug[1][i]);
	return 0;
}
0