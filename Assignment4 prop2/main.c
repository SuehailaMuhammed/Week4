#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,p,j;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    printf("The second largest number:%d",a[1]);

    return 0;
}
