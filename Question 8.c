#include <stdio.h>
void unique(int[],int);
int main()
{
    int i=0;
    int size=0;
    printf("Please Enter a Size of an Array that you want: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nPlease Enter %d Integers in an Array:\n\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("All Unique Elements in a given array of size %d are:  ",size);
    unique(arr,size);
    printf("\n");
    return 0;
}
void unique(int a[],int n)
{
    int i=0;
    int j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j]||a[i]>a[j]);
            else if(i!=j)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d  ",a[i]);
        }
    }
}
