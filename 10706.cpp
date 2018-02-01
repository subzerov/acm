#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string linea="";
	char cad[100000];
	int c=1;
	while(linea.size()<=2147483647){
		sprintf(cad,"%d",c);
		linea+=cad;
		c++;
	}
	cout<<linea<<endl;
	return 0;
}
