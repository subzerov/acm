#include <stdio.h>
#include <string.h>

int main() {
	int blocks,m,n,a,b;
	int ma[26][2];
	int v1[13],v2[13],x1,x2;
	char c1[50],c2[50];
	scanf("%d",&blocks);
	memset(ma,0,sizeof(ma));
	while(blocks--) {
		scanf("%d %d",&m,&n);
		while(m--){
			scanf("%s %s",&c1,&c2);
			a=c1[0]-'A';
			b=c2[0]-'A';
			ma[b][0]=a;
			ma[b][1]=ma[a][1]+1;
		}
		/*for (int i=0;i<26;i++)
			printf("[%c] %c %d\n",i+'A',ma[i][0]+'A',ma[i][1]);
		*/
		while(n--){
			scanf("%s %s",&c1,&c2);
			a=c1[0]-'A';
			b=c2[0]-'A';
			v1[x1=0]=a;
			v2[x2=0]=b;
			/*nivelamos*/
			while(ma[a][1]>ma[b][1])
				v1[++x1]=a=ma[a][0];
			while(ma[a][1]<ma[b][1])
				v2[++x2]=b=ma[b][0];
			while(a!=b){
				v1[++x1]=a=ma[a][0];
				v2[++x2]=b=ma[b][0];
			}
			for (a=0;a<x1;a++)
				printf("%c",v1[a]+'A');
			for ( ;x2>=0;x2--)
				printf("%c",v2[x2]+'A');
			printf("\n");
		}
		if(blocks>0)
				printf("\n");
	}
	return 0;
}
