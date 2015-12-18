#include<stdio.h>
#include<math.h>

int main()
{
	int i=1, rem, n, temp, sum = 0, bin;
	/*printf("Enter number to convert to binary: ");
	scanf("%d",&temp);
	//printf("%d",temp);
	while (temp!=0)
	{
		rem = temp%2 ;
		sum = sum +rem*i ;
		temp = temp/2;
		i*=10;
	}
	
	printf("%d\n", sum);*/
	
	sum = 0;
	i=0;
	
	printf("Enter number to convert to decimal: ");
	scanf("%d",&temp);
	while(temp!=0)
	{
		rem = temp%10;
		temp/=10;
		bin = pow(2,i);
		sum = sum + rem*bin;
		i++;	
	}
	
	printf("%d\n", sum);
	
	return 0;
	
	
}

		