#include <stdio.h>
void sort(int [],int);
int main()
{
    int i=0;
    int size=0;
    printf("Please Enter the size of an Array: ");
    scanf("%d",&size);
    int a[size];
    printf("\nPlease Enter %d integers in an Array:\n\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,size);
    printf("\nThe given Array size of %d after Sorting is:\n\n",size);
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void sort(int b[],int n)
{
    int i=0;
    int j=0;
    int k=0;
    int m=0;
    int t=0;
    int c[n];
    for(i=0;i<n;i++)
    {
        c[i]=b[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(c[i]>c[j])
            {
                k++;
            }
        }
        if(b[k]==-1)
        {
            b[k]=c[i];
        }
        else
        {
            while(b[k]!=-1)
            {
                k++;
            }
            b[k]=c[i];
        }
    }
}
