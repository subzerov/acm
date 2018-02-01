#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("483.in","r",stdin);
	#endif
	string buffer;
	char cad[100];
	while(getline(cin,buffer)){
		istringstream in (buffer);
		while(in>>cad){
			cout<<cad;
		}
	}
	return 0;
}
