#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#define MAX 9E14
#define MAX_CRIBA 3000000

using namespace std;

char criba[MAX_CRIBA];
vector <int> primos;
vector <int> factores;
unsigned long long int cf;

void llena_criba() {
	criba[1]=1;
	unsigned long long int i,j;
	for (i=2;i<MAX_CRIBA;i++)
		if (!criba[i]){
			primos.push_back(i);
			for(j=2*i;j<MAX_CRIBA;j+=i)
				criba[j]=1;
		}
}

void divisoresPrimos(int n) {
	int i=0,t;
	cf=0;
	factores.clear();
	while(i<primos.size() && primos[i]*primos[i]<=n) 
		if (!(n%primos[i])){
			t=1;
			while(!(n%primos[i])){
				n/=primos[i];
				t*=primos[i];
				cf++;
				factores.push_back(t);
			}			
		}else
			i++;
	if (n>1){
		cf++;
		factores.push_back(n);
	}
}

int main() {
	freopen("10290.in","r",stdin);
	unsigned long long int n,nn,n1,maxdiv;
	unsigned long long int pow[52];
	int i,j;
	llena_criba();
	cout<<"Total de primos de 1 a "<<MAX<<": "<<primos.size()<<endl;
	pow[0]=1;
	pow[1]=2;
	for (i=2;i<52;i++)
		pow[i]=pow[i-1]*2;
	
	while(cin>>n) {//n<=9E14;
		nn=2*n;
		for(j=0;j<10;j++) {
			if((nn/pow[j]%2)!=0 ){
				maxdiv=pow[j];
				break;
			}
		}
		n1=nn/maxdiv;
		divisoresPrimos(n1);
		cout<<"Divisores primos de "<<n1<<":  "<<cf<<endl;
		printf("1 ");
		for (i=0;i<factores.size();i++)
			printf("%d ",factores[i]);
		printf("\n");
	}
	return 0;
}
