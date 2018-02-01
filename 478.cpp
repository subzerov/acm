#include <stdio.h>
#include <math.h>

int main() {
	#ifndef ONLINE_JUDGE
		freopen("477.in","r",stdin);
	#endif
	double x,y,fig[12][7],tmpx,tmpy;
	int i=1,j,point,b;
	char obj;
	while (scanf("%c",&obj)==1 && obj!='*') {
		if (obj=='r')
			scanf("%lf %lf %lf %lf\n",&fig[i][1],&fig[i][2],&fig[i][3],&fig[i][4]);	
		else if (obj=='c')
			scanf("%lf %lf %lf\n",&fig[i][1],&fig[i][2],&fig[i][3]);			//x,y,r
		else if (obj=='t'){
			scanf("%lf %lf %lf %lf %lf %lf\n",&fig[i][1],&fig[i][2],&fig[i][3],&fig[i][4],&fig[i][5],&fig[i][6]);			//x1,y1,x2,y2,x3,y3
			y=-999999.9
			for (j=2;j<=6;j+=2)
				if(fig[i][j]>=y)
					x=i;
			tmpy=fig[i][x];		//y (y mas grandota)
			tmpx=fig[i][x-1];	//x
		}
		fig[i][0]=obj;
		i++;
	}
	point=1;
	while(scanf("%lf %lf",&x,&y)==2 && (x!=9999.9 && y!=9999.9)) {
		//printf(">%f\t\t%f\n",x,y);
		for (j=b=1;j<i;j++){
			if (fig[j][0]=='r' && x>fig[j][1] && x<fig[j][3] && y>fig[j][4] && y<fig[j][2]) {
				printf("Point %d is contained in figure %d\n",point,j);
				b=0;
			}else if(fig[j][0]=='c' && (((fig[j][1]-x)*(fig[j][1]-x))+((fig[j][2]-y)*(fig[j][2]-y)))<(fig[j][3]*fig[j][3])) {
				printf("Point %d is contained in figure %d\n",point,j);
				b=0;
			}else if(fig[j][0]=='t' ){
				printf("Point %d is contained in figure %d\n",point,j);
				b=0;
			}
		}
		if (b)
			printf("Point %d is not contained in any figure\n",point);
		point++;
	}
	return 0;
}
