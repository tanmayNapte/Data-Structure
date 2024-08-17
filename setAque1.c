#include<stdio.h>
void bubblesort(int [], int);
void display(int [], int);
void main()
{
    int a[20], i, n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Enter %d element : ", i+1);
        scanf("%d", &a[i]);
    }
    bubblesort(a,n);
    printf("Element after sorting : ");
    display(a,n);
}
void bubblesort(int a[20], int n)
{
    int i, j, temp = 0;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            } 
        }
    }
}
void display(int a[20], int n)
{
    int i;
    printf("\n");
    for(i = 0; i < n; i++){
        printf("\t %d", a[i]);
    }
    printf("\n");
}