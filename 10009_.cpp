#include <cstdio>
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int ma[26][26];
int pesos [26][26];
int grado[26]={1};
bitset<26> procesado;
bitset<26> visitado;
vector<int> salida;
bool salir;

void prof (int i, int f) { //inicio, fin
	procesado[i]=visitado[i]=1;
	salida.push_back(i);
	int c,sig;
	for (c=0;c<grado[i];c++) {
		sig=ma[i][c];
		if (sig==f){ 
			salida.push_back(sig);
			salir=1;
			return;
		}else  if (!procesado[sig] && !visitado[sig]) {
			prof(sig,f);
		}if (salir)
			return;
		
	}
	salida.pop_back();
}
void floyd()
{
	int i,j; /* dimension counters */
	int k; /* intermediate vertex counter */
	int through_k; /* distance through vertex k */
	for (k=0; k<26; k++)
		for (i=0; i<26; i++)
			for (j=0; j<26; j++) {
				through_k = pesos[i][k]+pesos[k][j];
	if (through_k < pesos[i][j])
		pesos[i][j] = through_k;
	}
}
int main() {
	int blocks,m,n;
	char f,c;
	scanf("%d\n",&blocks);
	while(blocks>0) {
		scanf("%d%d",&m,&n);
		//printf("b=%d m=%d n=%d\n",blocks,m,n);
		for (f=0;f<26;f++) {
				for (c=0;c<grado[f];c++)
					ma[f][c]=0;
				grado[f]=0;
		}
		while(m>0) {
			while (cin>>f && !(f>='A' && f<='Z')) ;
			while (cin>>c && !(c>='A' && c<='Z')) ;
			f-='A';
			c-='A';
			ma[f][grado[f]++]=c;
			ma[c][grado[c]++]=f;
			pesos[f][c]=pesos[c][f]=1;
			//printf("%c %c\n",f,c);
			m--;
		}
		for (f=0;f<26;f++){
			printf("%c <%d>: ",f+'A',grado[f]);
			for (c=0;c<26;c++) {
				//printf("%c ",ma[f][c]+'A');
				printf("%d ",pesos[f][c]);
			}
			printf("\n");
		}
		printf("\n");
		floyd();
		return 0;
		while (n>0) {
			salir=0;
			procesado.reset();
			visitado.reset();
			salida.clear();
			while (cin>>f && !(f>='A' && f<='Z')) ;
			while (cin>>c && !(c>='A' && c<='Z')) ;
			prof(f-'A',c-'A');
			for (f=0;f<salida.size();f++)
				printf("%c",salida[f]+'A');
			printf("\n");
			n--;
		}
		do {
			c=getchar();
		}
		while (c!='\n' && c!=EOF);
		blocks--;
	}
	return 0;
}
