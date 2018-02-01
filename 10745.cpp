#include <cstdio>
#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	string word,word2;
	vector <pair<string,string> > lista;
	vector <pair<string,string> >::iterator it,it2;
	bool b;
	while(cin>>word){
		word2=word;
		sort(word2.begin(),word2.end());
		lista.push_back( pair <string,string> (word,word2));
	}
	for (it=lista.begin();it!=lista.end();it++) {
		b=0;
		for (it2=lista.begin();it2!=lista.end() && b==0;it2++) {
			if(it!=it2 && includes( (*it).second.begin(),(*it).second.end(),(*it2).second.begin(),(*it2).second.end() ) ){
				//cout<<(*it2).first<<" contenido en " <<(*it).first<<"   "<<endl;
				lista.erase(it2);
				b=1;
			}
		}
	}
	sort(lista.begin(),lista.end());
	for(it=lista.begin();it!=lista.end();it++)
		cout<<(*it).first<<endl;
	return 0;
}
