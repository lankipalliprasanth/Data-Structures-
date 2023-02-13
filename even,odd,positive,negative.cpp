#include<stdio.h>
#define n 5
int main()
{
	int a[n],i,pos=0,neg=0,even=0,odd=0,zero=0;
	printf("enter %d integer numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			zero++;
		}
		else if(a[i]>0)
		pos++;
		else
		neg++;
		if(a[i]==0)
		{
			
		}
		else if(a[i]%2==0)
		even++;
		else
		odd++;
		
	}
	printf("\npositive:%d\n",pos);
	printf("\nnegative:%d\n",neg);
	printf("\neven:%d\n",even);
	printf("\nodd:%d\n",odd);
	printf("\nzero:%d\n",zero);
	return 0;
}
