#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

double ma[16][151];

void llena (void){
	int f,c;
	for (f=1;f<=15;f++)
			ma[f][1]=f;
	for (f=1;f<=15;f++)
		for (c=2;c<=150;c++)
			ma[f][c]=ma[f][c-1]*f;
}

int main() {
	int n,a;
	long double r,i;
	llena();
	/*cout<<powl(15,150)<<"   "<<ma[15][150];
	return 0;*/
	/*cout<<ma[1][1]<<" "<<ma[2][2]<<" "<<ma[2][3]<<" "<<ma[15][150]*/
	while(scanf("%d%d",&n,&a)==2){
		for(i=1,r=0;i<=n;i++)
			r+=i*powl(a,i);//ma[a][i];
		cout<<r<<endl;
		printf("%lf\n",r);
	}
	return 0;
}
