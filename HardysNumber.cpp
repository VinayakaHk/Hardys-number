#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,m,n;
	printf("Verification of Hardy's number\n");
	for(a=1;a<1000;a++)
	{
		for(b=1;b<=2000;b++)
		{
			for(c=1;c<=2000;c++)
			{
				for(d=1;d<=2000;d++)
				{
					m=pow(a,3)+pow(b,3);
					n=pow(c,3)+pow(d,3);
					
					if(m==n && m!=0 && n!=0  && a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
					{
						printf("\n(a)%d^3 +(b)%d^3=(m)%d ==(c)%d^3+(d)%d^3=(n)%d\n",a,b,m,c,d,n);
					        return 1;
                                        }
				}
			}
		}
	}
	return 0;
}
