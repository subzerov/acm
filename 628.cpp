#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct clave{char cad[257];int donde[8];};

clave arma( char pal[257], char regla[257]){
	int i,j,k,t=strlen(regla),tt=strlen(pal);
	clave datito;
	datito.donde[0]=0;
	for (j=0,i=0;j<t;j++){
		if (regla[j]=='#')
			for (k=0;k<tt;k++) 
				datito.cad[i++]=pal[k];
		else
			datito.donde[datito.donde[0]=datito.donde[0]+1]=i++;
	}
	datito.cad[i]=0;
	return datito;
}
void muestra(clave &datito,int x) {
	int i;
	//actualizamos
	for (i=1;i<=datito.donde[0];i++)
		datito.cad[datito.donde[i]]=x+'0';
	//
	printf("%s\n",datito.cad);
}

int main() {
	int cl,cr,i,j,k;
	char lista[100][257];
	char regla[257];
	clave datito;
	while (scanf("%d",&cl)==1 && cl!=0) {
		printf("--\n");
		for (i=0;i<cl;i++)
			scanf("%s",&lista[i]);
		scanf("%d",&cr);
		/*for (i=0;i<cl;i++){
			printf("%s",lista[i]);
		}*/
		for (i=0;i<cr;i++){
			scanf("%s",&regla);
		//for (i=0;i<cr;i++) 	//regla 0..cl
			for (j=0;j<cl;j++){		//pal 0..cr
				datito=arma(lista[j],regla);	 //armamos modelo
					for (k=0;k<10;k++)
						muestra(datito,k);
			}
		}
	}
	return 1;
}
