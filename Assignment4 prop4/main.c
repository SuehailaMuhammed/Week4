#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(n,i);

    return 0;
}
fun(int n, int i)
{
    int j;
    int a[n];

    printf("The repeated elements:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                printf("%d ",a[j]);
        }

    }
    return a[j];
}
