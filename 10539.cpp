#include <cstdio>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

#define MAX 1000000000000

using namespace std;

bitset <MAX> criba;
vector <int> primos;
vector <int> factores;
vector < pair<int,int> > factoresc;
set <int> divisor;

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
	return 0;
}
