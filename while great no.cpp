#include<stdio.h>
int main()
{
	int a,r,max=0;
	scanf("%d",&a);
	while(a>0)
	{
	r=a%10;
	if(r>max)
	max=r;
	a=a/10;
		
	}
	printf("%d",max);
	return 0;
}
