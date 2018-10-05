#include<stdio.h>
void main()
{
	int a,b,result;
	char op;
	printf("Enter a value\n");
	scanf("%d",&a);
	printf("Enter b value\n");
	scanf("%d",&b);
	printf("Enter option\n");
	scanf("%c",&op);
	switch(op)
	{
	case '+':
		result=sum(a,b);
		printf("SUM=%d\n",result);
		break;
	case '-':
		result=sum(a,b);
		printf("SUM=%d\n",result);
		break;
	case '*':
		result=sum(a,b);
		printf("SUM=%d\n",result);
		break;
	case '/':
		result=sum(a,b);
		printf("SUM=%d\n",result);
		break;
	default :printf("Invalid Option\n");
	}
}
