#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

typedef struct numeros {
	int n;
	string dato;
};


int i;
vector <numeros> lista;
numeros tmp;
string buffer;

void procesa () {
	//cout<<": "<<buffer<<endl;
	istringstream in (buffer);
	while (in>>tmp.n)
		lista.push_back(tmp);
	for(i=0;i<lista.size();i++) 
		cin>>lista[lista[i].n-1].dato;
	for(i=0;i<lista.size();i++) 
		cout<<lista[i].dato<<endl;
	lista.clear();
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("482.in","r",stdin);
	#endif
	int n;
	scanf("%d",&n);
	while(n>1) {
		if (getline(cin,buffer) && buffer[0]!=0) {
			procesa();
			cout<<endl;
			n--;
		}
	}
	getline(cin,buffer);
	getline(cin,buffer);
	getline(cin,buffer);
	procesa();
	printf(".............");
	return 0;
}
