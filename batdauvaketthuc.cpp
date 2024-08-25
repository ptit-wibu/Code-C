#include<stdio.h>
void process()
{
	long long x,i,k;
	scanf("%lld",&x);
	i = x;
	while (i>9)
	{
		i /= 10; // lay dan chu so toi hang ben trai
		k = i; //luu chu so vao bien
	}
	if(k == (x%10)) printf("YES\n");
	else printf("NO\n");
}

int main ()
{
	int n;
	scanf("%d",&n);
	while (n--)
	{
		process();
	}
	return 0;
}
