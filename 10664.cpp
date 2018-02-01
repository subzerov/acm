#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <fstream>
#define MAX 20

using namespace std;

int v[MAX],m;

int solve(int s, int p){
	if (p<0) 
		return 0;
	if (s+v[p]==m)
		return 1;
	if (s+v[p]<m){
		s+=v[p];
		return solve(s,p-1);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("10664.in","r",stdin);
	#endif
	int n,k,total,p;
	string linea;
	
	scanf("%d\n",&n);
	while (n--) {
		getline(cin,linea);
		istringstream in (linea);
		total=p=0;
		while(in>>k) {
			v[p++]=k;
			total+=k;
		}
		if (total%2!=0){
			printf("NO\n");
			continue;
		}
		sort(v,v+p);
		m=total/2;
		if (solve(0,p-1))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

