#include <cstdio>
#include <bitset>
#include <vector>
#include <set>
#include <math.h>

#define MAX 31623

using namespace std;

bitset <MAX> criba;
vector <int> primos;
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

int main() {
	float r;
	int n,nr,i,b;
	llena_criba();
	while(scanf("%d",&n)==1 && n!=0) {
		nr=sqrt(n);
		r=n;
		b=0;
		for(i=0;i<nr;i++){
			if(n%primos[i]==0){
				r*= (primos[i]-1)*1.0/primos[i];
				//printf("> %d\n",primos[i]);
				b=1;
			}
		}
		if (b==0 && n!=1) {
			r=r*(n-1)/n;
		}
		//printf("%d\n",b);
		printf("%.0f\n",r);
	}	
	return 1;
}
