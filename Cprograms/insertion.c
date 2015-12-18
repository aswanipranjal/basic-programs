#include<stdio.h>
#include<time.h>

void insertion(int a[], int n)
{
	int i,c,temp,j;
	int current;
	for (i=1;i<n;i++)
	{
		temp = a[i];
		for(j=i; j>0 && a[j-1] > temp; j--)
			a[j] = a[j-1];
		a[j] = temp;
	}
}

int main()
{
	int arr[20], n, k;
	printf("Enter the number of elements you want ");
	scanf("%d", &n);
	printf("Enter elements ");
	for(k=0; k<n; k++)
	{
		scanf("%d", &arr[k]);
	}
	time_t rawtime;
  	struct tm * timeinfo;

  	time ( &rawtime );
  	timeinfo = localtime ( &rawtime );
  	printf ( "Time Before %s\n", asctime (timeinfo) );
	insertion(arr, n);
	time ( &rawtime );
  	timeinfo = localtime ( &rawtime );
  	printf ( "Time After %s\n", asctime (timeinfo) );
	printf("Elements after sorting: ");
	for(k=0; k<n; k++)
	{
		printf("%d\n", arr[k]);
	}
	return 0;
}
/*	c = i-1;
		current = a[i];
		while(a[c]>current && c>=0)
		{
			a[c+1] = a[c];
			c--;
		}
		a[c+1] = current;*/