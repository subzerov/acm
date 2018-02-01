#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main() {
	#ifndef ONLINE_JUDGE
		freopen("492.in","r",stdin);
	#endif
	string linea, word;
	while(getline(cin,linea)) {
		istringstream in (linea);
		while(in>>word){
			cout<<word<<endl;
		}
	}
	return 0;
}
