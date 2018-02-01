#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
#include <vector>
#define all(c) (c).begin(),(c).end()
#define ffor(c,i) for(typeof((c).begin())i = (c).begin(); i != (c).end(); i++) 

using namespace std;

struct edificio {
	int n;
	float x,y,w,d,h;
};
struct comp{
	bool operator()(edificio a, edificio b) {
		if (a.x==b.x)
			return a.y<b.y;
		return a.x<b.x;
	}
};

int main() {
	#ifndef ONLINE_JUDGE
	freopen("221.in","r",stdin);
	#endif
	int i,j,n,map=1,b;
	vector <edificio>v;
	
	set <edificio,comp> s;
	set <edificio>::iterator it;
	edificio tmp;
	
	while(scanf("%d",&n)==1 && n!=0) {
		if (map!=1)
			printf("\n");
		s.clear();
		v.clear();
		for (i=1;i<=n;i++){
			scanf("%f %f %f %f %f\n",&tmp.x,&tmp.y,&tmp.w,&tmp.d,&tmp.h);
			tmp.n=i;
			//v.push_back(tmp);
			it=upper_bound(s.begin(),s.end(),tmp,comp());
			b=1;
			if(it==s.end())
				s.insert(tmp);
			else {
				printf("%d<%.0f> %d<%.0f>\n",it->n,it->x,tmp.n,tmp.x);
				if(it->x==tmp.x){
					printf("*\n");
					//if (it->y<tmp.y)
						//if(it->h>=tmp.h)
					//tmp.n=-1;
							b=0;
				}
			}
			if(b){
				s.insert(tmp);
			}
		}
		//sort(v.begin(),v.end(),comp);
		printf("For map #%d, the visible buildings are numbered as follows:\n",map++);
		/*for (i=0,j=-1;i<v.size();i++,j++) {
			if(j>=0){
				if(v[j].x==v[i].x){
					if(v[j].y<v[i].y){
						if (v[j].h>=v[i].h)
							v[i].n=-1;
					}
				}
			}
		}*/
		/*
		for (i=0;i<v.size();i++) {
			if(v[i].n!=-1)
				printf("%d ",v[i].n);
		}*/
		ffor(s,it)
			printf("%d ",it->n);
		printf("\n");
	}
	return 0;
}
