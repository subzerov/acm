#include <stdio.h>
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int n;
	char c;
	bool b;
	scanf("%d%*c%*c",&n);
	set <char> sal;
	while(n--){
		while(scanf("%c",&c)==1 && c!='\n')
			sal.insert(c);
		printf("%d",sal.size());
		sal.clear();
		if(n>0)
			printf("\n\n");
		
	}
	return 0;
}
