#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main() {	
	int dir[2001],i;
	vector < pair <string,string> > dicc;
	vector < pair <string,string> >::iterator it;
	string word,word2;
	while (cin>>word && word!="#"){
		word2=word;
		sort(word2.begin(),word2.end());
		dicc.push_back(pair<string,string>(word,word2));
	}
	//for (it=dicc.begin();it!=dicc.end();it++)
	//	cout<<(*it).first<<endl;
	//cout<<dicc[2].first;
	while (getline(cin,word) && word!="#"){
		dir[0]=0;
		word2="";
		for (i=0;i<word.size();i++)
			if(word[i]!=' ')
				word2+=word[i];
		sort(word2.begin(),word2.end());
		cout<<word<<" :  "<<word2<<endl;
	}
	return 0;
}
