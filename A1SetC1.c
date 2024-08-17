#include <stdio.h>
void main()
{
	int n, i, pass, temp;
	printf("Enter how many elements :- ");
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; i++)
	arr[i] = rand()%100;
	for (pass = 1; pass < n; pass++)
	{
		for (i = 0; i < n - pass; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	printf("Sorted array is:- ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
