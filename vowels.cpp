#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 'a':
		case 'A':
		case 'E':
		case 'e':
		case 'o':
		case 'O':
		case 'i':
		case 'I':
		case 'u':
		case 'U':
		printf("vowels");
		break;
		default:
			printf("consonents");
		break;
				
	}
	
return 0;

}
