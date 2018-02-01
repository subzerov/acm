#include <iostream>
#include <string>
#include <sstream>
#define MAX 21

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("111.in","r",stdin);
	#endif
	int i,j,n,max;
	int c[MAX],r[MAX],longitud[MAX];
	string buffer;
	scanf("%d\n",&n);
	for (i=0;i<n;i++){
		scanf("%d",&j);
		c[j]=i;
		
	}
	scanf("\n");
	
	for (i=0;i<=n;i++){
		printf("c[%d]=	%d\n",i,c[i]);
	}
	
	//getline(cin,buffer);
	//cout<<buffer<<endl;
	while(getline(cin,buffer)){
		cout<<":"<<buffer<<endl;
		istringstream in(buffer);
		
		for (i=0;i<n;i++){
			in>>j;
			r[j]=i;
		}
		
		for (i=0;i<=n;i++){
			printf("r[%d]=%d\n",i,r[i]);
		}
		printf("\n");
		
		
		//printf("\n");
		/*for (i=0;i<n;i++){
			printf(">%d	%d\n",c[i],r[i]);
		}*/
		max=0;
		int **cc;
		cc=new int* [n+1];
		for (i=0;i<=n;i++)
			cc[i]=new int [n+1];
		for (i=0;i<=n;i++) 
			cc[i][0]=0;
		for (j=0;i<=n;i++) 
			cc[0][j]=0;
		
		for (i=1;i<=n;i++){
			for (j=1;j<=n;j++) {
				if(c[i-1]==r[j-1])
					cc[i][j]=cc[i-1][j-1]+1;
				else if(cc[i-1][j]==cc[i][j-1])
					cc[i][j]=cc[i-1][j];
				else
					cc[i][j]=cc[i][j-1];
			}
		}
		/*
		for (i=1;i<=n;i++){
			longitud[i]=1;
			for (j=i-1;j>=1;j--){
				if(c[j]<r[i] && longitud[j]+1>longitud[i])
					longitud[i]=longitud[j]+1;
			}
		}
		int lon=0;
		for (i=1;i<=n;i++){
			printf("%d	%d\n",longitud[i],r[i]);
			if (longitud[i]>lon){
				lon=longitud[i];
			}
		}*/
		printf(">%d\n",cc[n][n]);
		
		//return 0;
	}
	
}
