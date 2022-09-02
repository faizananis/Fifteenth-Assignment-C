#include <stdio.h>
void merge(int[],int[],int);
int main()
{
    int i=0;
    int size=0;
    printf("Please Enter the size of both arrays that you want: ");
    scanf("%d",&size);
    int a[size];
    int b[size];
    printf("\nNow Enter Values in  the first array of size %d:\n\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nNow Enter Values in the second array of size %d:\n\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nThe Merged Array is given below in descending order of both arrays of size %d ",size);
    printf("which are given in descending order:\n\n ");
    merge(a,b,size);
    printf("\n");
    return 0;
}
void merge(int a[], int b[], int n)
{
    int arr[n+n];
    int i=0;
    int j=0;
    int k=0;
    while(k<n*2)
    {
        if(a[i]>b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    for(k=0;k<n*2;k++)
    {
        printf("%d  ",arr[k]);
    }
}
