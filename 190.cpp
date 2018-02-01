#include <stdio.h>



int main() {
	float p[3][2];
	float m[3];
	int i,j;
	while(scanf("%f%f%f%f%f%f",&p[0][0],&p[0][1],&p[1][0],&p[1][1],&p[2][0],&p[2][1])==6){
		for (i=0;i<3;i++)
				printf("[%d][0]=%.3f\t[%d][1]=%.3f\n",i,p[i][0],i,p[i][1]);
		m[0]=(p[1][1]-p[0][1])/(p[1][0]-p[0][0]);
		m[1]=(p[2][1]-p[0][1])/(p[2][0]-p[0][0]);
		m[2]=(p[1][1]-p[2][1])/(p[1][0]-p[2][0]);
		//printf("%.3f  %.3f  %.3f\n",m[0],m[1],m[2]);
		resuelve(0,0);
		//
		printf("--\n");
		
	}
	return 0;
}
