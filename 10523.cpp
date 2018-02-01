#include <stdio.h>
#include <iostream>
#include <set>
#include <iterator>
#include <string.h>

using namespace std;
int eleva(int a, int n){
	int r=1;
	for (int i=0;i<n;i++)
		r=r*a;
	return r;
}

int main() {
	int n,a,i,r;
	while(scanf("%d%d",&n,&a)==2){
		for(i=1,r=0;i<=n;i++)
			r+=i*eleva(a,i);
		printf(">%d\n",r);
	}
	return 0;
}
