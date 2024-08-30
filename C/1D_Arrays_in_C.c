#include <stdio.h>
int main() 
{
    int n,i,s=0;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s = s+arr[i];
    }        
    printf("%d",s);
    free(arr);
    return 0;
}
