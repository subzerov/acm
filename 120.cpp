#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("120.in","r",stdin);
	#endif
	int m=30;
	printf("%10d",30);
	return 0;
	int vec[30],i,j,k;
	string buffer;
	while(getline(cin,buffer)) {
		cout<<buffer<<endl;
		istringstream in (buffer);
		i=0;
		while(in>>vec[i]) {i++;}
		for (j=0,k=-1;j<=i;j++) ;
			
	}
	return 0;
}
