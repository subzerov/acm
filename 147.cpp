#include <cstdio>
#include <iostream>
#include <cstring>
#define MAX 12
using namespace std;

//100, 50, 20, 10,  5   2, 1, 50c, 20c, 10c  5c
int coin1[]={10,5,1 };//{1000,5000,2000,1000,500,200,100,50,20,10,5};
int coin[]={1,5,10 };
//2000,1000,400,200,100,40,20,10,4,2,1 
long long nway[MAX+1];

int main(){
	#ifndef ONLINE_JUDGE
		freopen("147.in","r",stdin);
	#endif
	char cad[50];
	float vf;
	int n;
	
	//memset(nway,0,sizeof(nway));
	int i,j;
	int c;
	nway[0]=1;
	for (i=0;i<3;i++){
		c=coin[i];
		printf("c=%d\n",coin[i]);
		for (j=c;j<=MAX;j++){
			printf(">[%d]=	[%d-%d=%d]	=%d\n",j,j,c,j-c,nway[j-c]);
			nway[j]+=nway[j-c];
			printf("<[%d]=	[%d-%d=%d]	=%d\n",j,j,c,j-c,nway[j]);
		}
		printf("\n");
	}
	cout<<nway[1]<<endl;
	cout<<nway[2]<<endl;
	cout<<nway[3]<<endl;
	cout<<nway[4]<<endl;
	cout<<nway[5]<<endl;
	cout<<nway[6]<<endl;
	cout<<nway[7]<<endl;
	cout<<nway[8]<<endl;
	cout<<nway[9]<<endl;
	cout<<nway[10]<<endl;
	cout<<nway[11]<<endl;
	cout<<nway[12]<<endl;
	return 0;
	while(gets(cad) && strcmp(cad,"0.00")!=0 ){
		sscanf(cad,"%f",&vf);
		n=(vf*100+.5);
		printf("%6.2f	%d	",vf,n);
		cout<<nway[n]<<endl;
	}
	return 0;
}
