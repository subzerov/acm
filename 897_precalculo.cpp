
#include <cstdio>
#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <iterator>

#define MAX 10000000	//raiz de 10 000 000=3162.xx   +1
#define LIM 8		//total de 10^algo
using namespace std;

bitset <MAX> criba;
vector <int> primos;
vector <int> cosa;

int lim[LIM]={1,10,100,1000,10000,100000,1000000,10000000};
int maxval[LIM]={2,11,101,1009,10007,100003,1000003,9999991};

void llena_criba() {
	criba.set();
	criba.reset(0);
	criba.reset(1);
	for (int i=2;i<MAX;i++)
		if (criba.test(i)){
			primos.push_back(i);
			for(int j=2*i;j<MAX;j+=i)
				criba.reset(j);
		}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("897.in","r",stdin);
	#endif
	char tmp[20];
	string cad;
	int i,n;
	vector <int>::iterator it;
	llena_criba();
	for (i=0;i<primos.size();i++){
		if (criba[primos[i]]){
			sprintf(tmp,"%d",primos[i]);
			cad=tmp;
			sort(cad.begin(),cad.end());
			//cout<<"r"<<endl;
			do {
				//el numero -> cadena permutada-> numero
				n=atoi(cad.c_str());
				//cout<<n<<"	"<<criba[n]<<endl;
				if (!criba[n]){
					n=-1;//no
					break;
				}
			}while(next_permutation(cad.begin(),cad.end()));
			//cout<<"p"<<endl;
			//n es usada como bandera -1 no
			if (n==-1){
				criba[primos[i]]=0;
			}else
				cosa.push_back(primos[i]);
		}	
	}
	cout<<"numeros precalculados"<<endl;
	for (i=0;i<cosa.size();i++){
		cout<<cosa[i]<<endl;
	}
	return 0;
	
	while(scanf("%d",&n)==1 && n!=0){
		for (i=0;i<LIM;i++){
			if (lim[i]>n)
				break;
		}
		//el rango de cosas a buscar es de n+1 a 10^i
		n++;
		//busco al cosa-primo mas cercano (por la izq) a n
		it=lower_bound(cosa.begin(), cosa.end(), n);
		//barre hasta encontrar un primo permutable
		if(*it<maxval[i] && *it>=n){
			printf("%d\n",*it);	
		}else
			printf("0\n",n);
			
	}
	return 0;
}
