#include <stdio.h>
int duplicate(int [],int);
int main()
{
    int i=0;
    int size=0;
    int element=0;
    printf("Please Enter the size of an Array that you want: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nNow Enter all %d Values in an Array:\n\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    element=duplicate(arr,size);
    if(element==-1)
    {
        printf("\nThere is not any adjacent duplicate value in an whole array.\n");
    }
    else
    {
        printf("\nThe First adjacent duplicate value in an Array is: %d\n",element);
    }
    return 0;
}
int duplicate(int a[],int n)
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            return a[i];
        }
    }
    return -1;
}
