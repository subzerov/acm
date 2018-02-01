include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f,c,ct;
char ma[92][91];

void procesa(int fb, int cb){
	int ff,cc;
	for (ff=fb-1;ff<=fb+1;ff++)
		if(ff>=0 && ff<f)
			for (cc=cb-1;cc<=cb+1;cc++)
				if(cc>=0 && cc<c)
					if(ma[ff][cc]=='W'){
						ma[ff][cc]='0';
						ct++;
						procesa(ff,cc);
					}
}

int main(){
	int n,fb,cb;
	f=0;
	scanf("%d%*c%*c",&n);
	while(n--){
		while(scanf("%s",&ma[f])==1 && (ma[f][0]=='L' || ma[f][0]=='W')) f++;
		c=strlen(ma[0]);
		strcpy(ma[90],ma[f]);
		do{
			scanf("%s",&ma[91]);
			fb=atoi(ma[90]);
			cb=atoi(ma[91]);
			ct=0;
			if(ma[fb-1][cb-1]=='W'){
				ma[fb-1][cb-1]='0';
				ct++;
				procesa(fb,cb);
			}
			printf("%d\n",ct);
		}while(scanf("%s",&ma[90])==1 && ma[90][0]!='L' && ma[90][0]!='W');
		strcpy(ma[0],ma[90]);
		f=1;
	}
	return 0;
}

