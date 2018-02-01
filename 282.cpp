#include <iostream>
#include <algorithm>
#include <functional>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	vector <string> lista;
	vector <string>::iterator ita;
	vector <int> a;
	vector <int>::iterator it;
	string cad,cad2;
	int i;
	cad="juan";
	cad2="juanito";
	cout<<cad2.find(cad,0);
	while (cin>>cad){
		if (cad!="end")
			lista.push_back(cad);
		else {
			printf("%d\n",lista.size());
			for (i=0;i<lista.size();i++)
				printf("%s\n",lista[i].c_str());
			scanf("%*s");
			cin>>cad>>cad2;
			//buscamos
			for (i=0;i<lista.size();i++)
				if
			//
			scanf("%*s");
			cout<<">  "<<cad<<"  "<<cad2<<endl;
			lista.clear();
		}
	}
	
	return 1;
}
