#include<stdio.h>
#include<math.h>
long long ucln(long long a, long long b)
{
    while(b!=0)
    {
        long long tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}
long long bcnn(long long a, long long b)
{
    return (a*b)/ucln(a,b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long m,n;
        scanf("%lld%lld",&m,&n);
        long long res = m;
        for(int i=m+1;i<=n;i++)
        {
            res = bcnn(res,i);
        }
        printf("%lld\n",res);
    }
}
