#include<iostream>
#include<stdio.h>
using namespace::std;
long long int cal(long long int n,long long int ar[200][200])
{
	long long int i,j,k,z,p,cr[200][200],s,d,l,m,sum=0;
	if(n==3)
	{
		z=((ar[0][0]*((ar[1][1]*ar[2][2])-(ar[1][2]*ar[2][1])))-(ar[0][1]*((ar[1][0]*ar[2][2])-(ar[1][2]*ar[2][0])))+(ar[0][2]*((ar[1][0]*ar[2][1])-(ar[1][1]*ar[2][0]))));
		return z;
	}
	else;
	{
		i=0;
		for(j=0;j<n;++j)
		{
			d=0;
			s=0;
			for(k=0;k<n;++k)
			{
				for(p=0;p<n;++p)
				{
					if(k!=i&&p!=j)
					{
						cr[s][d]=ar[k][p];
						++d;
					}	
				}
				if(d!=0)
				++s;
				d=0;
			}
		z=cal(n-1,cr);
		z=z*ar[i][j];
		if((i+j)%2==0)
		sum=sum+z;
		else
		sum=sum-z;
		}
	}
	
 return sum;
 } 
int main()
{
	long long int n,z,zz=1;
	long long int i,j,ar[200][200];
	puts("enter the size of square mattrrix ie NxN mattrix");
	cin>>n;

	cout<<"enter the elements of"<<n<<"x"<<n<<"mattrix\n";
	for(i=0;i<n;++i)
	for(j=0;j<n;++j)
	{
		
		cout<<"ENTER ELEMENT NUMBER '"<<zz<<"' of mattrix\n";		
			cin>>ar[i][j];
		++zz;
	}
	if(n==2)
	{
		cout<<ar[0][0]*ar[1][1]-ar[0][1]*ar[1][0];
	}
	else 
	{
	z=cal(n,ar);
	cout<<"DETERMINANT = "<<z<<"\n\n\n";
	}
system("pause");
}
