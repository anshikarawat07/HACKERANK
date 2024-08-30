#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1024];
    int i=48,j;
    gets(str);
    while(i<=57)
    {
        int c=0;
        for(j=0;str[j]!='\0';j++)
            {
               if(str[j]==i)
               c++;
            }
        printf("%d ",c);
        i++;
    }    
    return 0;
}
