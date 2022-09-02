#include <stdio.h>
void frequency(int [],int);
int main()
{
    int i=0;
    int size=0;
    printf("Please Enter the size of an Array that you want: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nNow Enter %d Integers in an Array: \n\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Frequency of each element in an Array of size %d are:\n\n",size);
    frequency(arr,size);
    printf("\n");
    return 0;
}
void frequency(int a[],int n)
{
    int i=0;
    int j=0;
    int count=0;
    printf(" Element                    Frequency\n\n");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(j==i)
        printf("       %d                    %d\n",a[i],count);
    }
}

