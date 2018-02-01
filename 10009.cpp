#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <bitset>

using namespace std;
vector < bitset<26> > ma (26);
bitset<26> procesado;
bitset<26> visitado;

void prof (int i, int f) {
	procesado[i]=visitado[i]=1;
	
}
int main() {
	int blocks,m,n;
	char f,c;
	scanf("%d",&blocks);
	while(blocks>0) {
		scanf("%*c%d%d",&m,&n);
		printf("b=%d b=%d n=%d\n",blocks,m,n);
		for (f=0;f<26;f++)
			ma[f].reset();
		procesado.reset();
		visitado.reset();
		while(m>0) {
			while (cin>>f && !(f>='A' && f<='Z')) ;
			while (cin>>c && !(c>='A' && c<='Z')) ;
			ma[f-'A'][c-'A']=1;
			m--;
		}
		while (n>0) {
			while (cin>>f && !(f>='A' && f<='Z')) ;
			while (cin>>c && !(c>='A' && c<='Z')) ;
			prof(f-'A',c-'A');
			n--;
		}
		printf("\n");
		for (f=0;f<26;f++){
			for (c=0;c<26;c++) {
				cout<<ma[f][c];
			}
			printf("\n");
		}
		blocks--;
	}
	return 0;
}
