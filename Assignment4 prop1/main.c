#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,order,p;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the order you want(0 for ascending and 1 for descending):");
    scanf("%d",&order);
    if(order==0)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    p=a[i];
                    a[i]=a[j];
                    a[j]=p;
                }
            }
        }
        for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    }
    else
    {
    if(order==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    p=a[i];
                    a[i]=a[j];
                    a[j]=p;
                }
            }
        }
        for(i=0;i<n;i++)
        {
        printf("%d",a[i]);
        }
    }
    else
        printf("Please enter 0 or 1");
    }
    return 0;
}
