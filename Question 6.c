#include <stdio.h>
void reverse(int[],int);
int main()
{
    int i=0;
    int size=0;
    printf("Please Enter the size of an Array that you want: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nNow Enter %d integers in an Array:\n\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Given Array of size %d in reverse order is:  ",size);
    reverse(arr,size);
    printf("\n");
    return 0;
}
void reverse(int a[],int n)
{
    int i=0;
    for(i=n-1;i>=0;i--)
    {
        printf("%d  ",a[i]);
    }
}
