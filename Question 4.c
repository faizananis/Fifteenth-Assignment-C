#include <stdio.h>
void rotate(int a[],int size,int n,int d);
int main()
{
    int i=0;
    int size=0;
    char d;
    int n=0;
    printf("Please Enter the Size of an Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nPlease Enter %d Integer Numbers in an Array:\n\n",size);
    for(i=0;i<size;i++)
    {
        printf("Please Enter No.%d Integer in an Array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Please Enter that how many times of rotation you want ");
    printf("in an Array of size %d: ",size);
    scanf("%d",&n);
    while(d!=75&&d!=77)
    {
        printf("\n\n1. If you want to move elements in right direction then press \"Right Arrow Key\"");
        printf("\n2. If you want to move elements in left direction then press \"Left Arrow Key\"");
        printf("\n\nPlease Enter the key from the above options in which direction you want to move ");
        printf("elements in an Array: ");
        d=getch();
        d=getch();
        switch(d)
        {
        case 77:
        case 75:
            break;
        default:
            printf("\nYou Entered an Incorrect Key from the Menu. Try Again! ");
        }
    }
    rotate(arr,size,n,d);
    if(d==77)
    printf("\n\nThe Array after rotation by %d position in right direction is: ",n);
    else if(d==75)
    printf("\n\nThe Array after rotation by %d position in left direction is: ",n);
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void rotate(int a[],int size,int n,int d)
{
    int i=0;
    int t=0;
    int j=0;
    if(d==77)
    {
        for(i=0;i<n;i++)
        {
            t=a[size-1];
            for(j=1;j<size;j++)
            {
                a[size-j]=a[size-j-1];
            }
            a[0]=t;
        }
    }
    else if(d==75)
    {
        for(i=0;i<n;i++)
        {
            t=a[0];
            for(j=0;j<size;j++)
            {
                a[j]=a[j+1];
            }
            a[size-1]=t;
        }
    }
}
