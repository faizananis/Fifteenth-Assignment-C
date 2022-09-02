#include <stdio.h>
int duplicate(int[],int);
int main()
{
    int i=0;
    int size=0;
    printf("Please Enter a size of an array that you want: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nNow Enter %d Integer Values in an array:\n\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThere are %d duplicate elements in an ",duplicate(arr,size));
    printf("array of size %d.",size);
    return 0;
}
int duplicate(int a[],int n)
{
    int i=0;
    int j=0;
    int count=0;
    int same=0;
    for(i=0;i<n-1;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=1;
                break;
            }
        }
        if(count==1)
        {
            same++;
        }
    }
    return same;
}
