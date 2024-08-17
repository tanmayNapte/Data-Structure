#include <stdio.h>
void main()
{
	int i, j, current, n;
	printf("Enter size of array :");
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++){
		printf("Enter %d elements of array : ",i+1);
		scanf("%d", &arr[i]);
	}
	
	for (i = 1; i < n; i++)
	{
		current = arr[i];
		for (j = i - 1; arr[j] > current && j >= 0; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = current;
	}
	printf("Sorted array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
