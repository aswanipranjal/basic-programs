#include<stdio.h>

void search(int arr[], int first, int last, int num)
{
	int mid, f, l;
	mid =(first+last)/2;
	if(arr[mid]<=num && arr[last]>= num)
	{
		if(arr[mid] == num)
		{
			printf("The number : %d was found at: %d index", num, mid+1);
			return;
		}
		search(arr, mid, last, num);
	}
	else if(arr[mid]>num && arr[first]<=num )
	{
		if(arr[mid] == num)
		{
			printf("The number : %d was found at: %d index\n", num, mid+1);
			return;
		}
		search (arr, first, mid, num);
	}
}

int main()
{
	int num, arr[];
	int i,n;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	printf("Enter a sorted array: ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("Enter element to be searched: ");
	scanf("%d", &num);
	search(arr,0,n-1,num);
	return 0;
}