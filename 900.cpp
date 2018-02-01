#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

string suma(string x, string y) { 
   int n,l,res; 
   x.length()>y.length() ? l=x.length() : l=y.length(); 
   x=string(l-x.length(),'0')+x; 
   y=string(l-y.length(),'0')+y; 
   string r(l,'0'); 
   for (l--,res=0;l>=0;l--) { 
      n=x[l]+y[l]-'0'-'0'+res; 
      r[l]=n%10+'0'; 
      res=n/10; 
   } 
   if(res!=0) r=(char)(res+'0')+r; 
   return r; 
}


int main(){
	#ifndef ONLINE_JUDGE
		freopen("900.in","r",stdin);
	#endif
	int i,j,n;
	//long long v[50];
	string r[50];
	//v[1]=1;
	//v[2]=2;
	r[1]="1";
	r[2]="2";
	for (i=3;i<=50;i++){
		//v[i]=v[i-1]+v[i-2];
		r[i]=suma(r[i-1],r[i-2]);
	}
	while(scanf("%d\n",&n)==1 && n!=0) {
		cout<<r[n]<<endl;
		//printf("%Ld\n",v[n]);
	}
	return 0;
}

