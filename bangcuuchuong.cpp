#include<stdio.h>
void process()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d ",n*i);
	}
}

int main()
{
	process();
	return 0;
}
