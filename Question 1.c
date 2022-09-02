#include <stdio.h>
int great(int [], int);
int main()
{
    int size=0;
    int i=0;
    printf("Please Enter the Size of an Array that you want: ");
    scanf("%d",&size);
    int a[size];
    printf("\nPlease Enter %d integers in an  Array:\n\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe greatest Element in the given Array which is size of %d is: %d",size,great(a,size));
    printf("\n");
    return 0;
}
int great(int b[], int n)
{
    int i=0;
    int j=0;
    int t=0;
    int check=0;
    for(i=0;i<n;i++)
    {
        check=0;
        t=-1;
        for(j=0;j<n;j++)
        {
            if(b[i]<b[j]&&t!=b[j])
            {
                t=b[j];
                check++;
            }
        }
        if(check==0)
            return b[i];
    }
}
