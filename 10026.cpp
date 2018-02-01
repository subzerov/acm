#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(pair <float, int> a, pair <float, int> b) {
	if (a.first==b.first)
		return a.second<b.second;
	return a.first>b.first;
}
int main() {
	#ifndef ONLINE_JUDGE
	freopen("10026.in","r",stdin);
	#endif
	int n,t,dias,imp,i;
	vector <pair <float,int> >v;
	scanf("%d",&n);
	while(n--) {
		v.clear();
		scanf("%d",&t);
		for (i=1;i<=t;i++){
			scanf("%d %d",&dias,&imp);
			v.push_back(pair <float, int> (imp*1.0/dias,i));
		}
		sort(v.begin(),v.end(),comp);
		for (i=0;i<v.size();i++)
			printf("%d ",v[i].second);
		
		printf("\n");
	}
	return 0;
}
