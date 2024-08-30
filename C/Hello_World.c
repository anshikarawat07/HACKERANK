#include<stdio.h>
int main()
{
    char str[50];
    printf("Hello, World!\n");
    fgets(str,50,stdin);
    puts(str);
    return 0;
}
