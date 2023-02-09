#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return 0;
}
