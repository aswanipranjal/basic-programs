#include<Stdio.h>

void bubble(int a[],int n)
{
	int i = 0,j = 0,k = 0;
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
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
	bubble(arr, n);
	printf("Elements after sorting: ");
	for(k=0; k<n; k++)
	{
		printf("%d\n", arr[k]);
	}
	return 0;
}