#include<stdio.h> 
#include<math.h> 
int main() 
{ 
int n,touches_circle,k; 
long a=0,b=0; 
double radius,temp; 
while(scanf("%d",&n)==1) 
{ 
touches_circle = 8*n-4; 
if(touches_circle<0)touches_circle=0; 
radius=n-0.5; 
radius=radius*radius; 
for(k=1;k<n;k++) 
{ 
temp=radius-k*k; 
temp=sqrt(temp); 
a=(long)temp; 
b=b+a; 
} 
b=4*b; 
printf("In the case n = %d, %d cells contain segments of the circle.\n",n,touches_circle); 
printf("There are %ld cells completely contained in the circle.\n",b); 
b=0; 
} 
return 0;
} 
