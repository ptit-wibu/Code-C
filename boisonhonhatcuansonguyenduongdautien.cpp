#include<stdio.h>
long long ucln(long long a, long long b)
{
	long long k;
	while(b!=0)
	{
		k = a%b;
		a=b;
		b=k;
	}
	return a;
}
long long bcnn(long long a, long long b)
{
	return a*b/ucln(a,b);
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		long long n;
		scanf("%lld",&n);
		long long ans = 1;
		for(long long i=2;i<=n;i++)
		{
			ans = bcnn(ans,i);
		}
		printf("%lld\n",ans);
	}
}

